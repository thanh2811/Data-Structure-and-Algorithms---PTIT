#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int ok;

void dfs(int u,int res,vector<int> v[],vector<int> &vs,int k){
    if(ok) return;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]] == 1 && v[u][i]==res && k>2){
            // vs[res] = 2;
            ok = 1;
            return;
        }
        if(vs[v[u][i]]==0){
            dfs(v[u][i],res,v,vs,k+1);
        }
    }
}

int HasCycle(int u,vector<int> v[]){
    ok = 0;
    vector<int> vs(10005,0);
    dfs(u,u,v,vs,1);
    if(ok) return 1;
    return 0;
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[10005];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        // v[y].push_back(x);
   }
    For(i,1,n){
        if(HasCycle(i,v)){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        
    }
}