#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[1005][1005],n,m;

int check(){
    int d[n+1];
    For(i,1,n) d[i] = 1e6;
    For(k,1,n-1)
        For(i,1,n)
            For(j,1,n){
                int x = d[i] + a[i][j];
                if(d[j] > x) d[j] = x;
            }
    For(i,1,n)
        For(j,1,n){
            int x = d[i] + a[i][j];
            if(d[j] > x) return 1;
        }
    return 0;
}

void Res(){
    cin>>n>>m;
    For(i,1,n) For(j,1,m) a[i][j] = 1e6;
    For(i,1,m){
        int u,v,w;
        cin>>u>>v>>w;
        a[u][v] = w;
    }
    cout<<check()<<"\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}