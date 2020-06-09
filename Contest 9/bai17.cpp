#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[1005][1005];

void dfs(int u,int x,vector<int> v[],vector<int> &vs){
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]]==0){
            a[x][v[u][i]] = 1;
            dfs(v[u][i],x,v,vs);
        }
    }
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[10005];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
   }
    memset(a,0,sizeof(a));
    For(i,1,n){
        vector<int> vs(10005,0);
        a[i][i] = 1;
        dfs(i,i,v,vs);
        For(j,1,n) if(a[i][j]==0){
            cout<<"NO\n";
            return;
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