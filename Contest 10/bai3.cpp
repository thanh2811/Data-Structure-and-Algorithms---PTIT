#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,NotOk;
int mark[1005];

void dfs(int u,vector<int> v[],vector<int> &vs){
    if(NotOk) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0){
            mark[x] = u;
            dfs(x,v,vs);    
        }
        else if(vs[x]==1 && mark[u]!=x){
            NotOk = 1;
            return;
        }
    }
}

void Res(){
    cin>>n>>m;
    vector<int> v[1234];
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    vector<int> vs(10005,0);
    memset(mark,0,sizeof(mark));
    For(i,1,n){
        if(vs[i]==0){
            NotOk = 0;
            dfs(i,v,vs);
            if(NotOk){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}