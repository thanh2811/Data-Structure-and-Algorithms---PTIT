#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[105][105], d[105][105],n,m;

int Floyd(){
    For(k,1,n) For(i,1,n) For(j,1,n)
        if(d[i][j] > d[i][k] + d[k][j]) d[i][j] = d[i][k] + d[k][j];
}

void Res(){
    cin>>n>>m;
    For(i,1,n) For(j,1,m) {
        a[i][j] = d[i][j] = 1e9;
        if(i==j) d[i][j] = 0;
    }
    For(i,1,m){
        int u,v,w;
        cin>>u>>v>>w;
        a[u][v] = a[v][u] = w;
        d[u][v] = d[v][u] = w;
    }

    Floyd();

    int q;
    cin>>q;
    while(q--){
        int st,end;
        cin>>st>>end;
        cout<< d[st][end] <<'\n';
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}