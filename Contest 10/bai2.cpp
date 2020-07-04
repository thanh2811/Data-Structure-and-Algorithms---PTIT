#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,ok;

void dfs(int u,vector<int> v[],vector<int> &vs,int k){
    if(k==n) ok = 1;
    if(ok) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        if(vs[v[u][i]]==0)
            dfs(v[u][i],v,vs,k+1);
    }
    vs[u] = 0;
}

void Res(){
    ok = 0;
    cin>>n>>m;
    vector<int> v[20];
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        vector<int> vs(20,0);
        dfs(i,v,vs,1);
        if(ok){
            cout<<"1\n";
            return;
        }
    }    
    cout<<"0\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}