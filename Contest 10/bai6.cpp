#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,tmp;
vector<int> v[1000000];
int vs[100005];
void dfs(int u){
    tmp++;
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0) dfs(x);
    }
}

void Res(){
    cin>>n>>m;
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }  
    memset(vs,0,sizeof(vs));
    int ans = 0;
    For(i,1,n){
        tmp = 0;
        if(vs[i]==0){
            dfs(i);
            ans = max(ans,tmp);
        }
    }
    cout<<ans<<"\n";
    For(i,1,n) v[i].clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}