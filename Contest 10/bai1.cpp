#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int N,M,m,color[20],ok;

int isSafe(int u,vector<int> v[],int c){
    for(int i=0;i<v[u].size();i++){
        if(c==color[v[u][i]]) return 0;
    }
    return 1;
}

int go(int u,vector<int> v[]){
    if(u == N+1) ok = 1;
    if(ok) return 1;
    for(int i=1;i<=m;i++){
        if(isSafe(u,v,i)){
            color[u] = i;
            go(u+1,v);
        }
    }
    return 0;
}

void Res(){
    vector<int> v[20];
    memset(color,0,sizeof(color));
    cin>>N>>M>>m;
    int x,y;
    For(i,1,M){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    ok = 0;
    go(1,v);
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}