#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int a[1005][1005];

int bfs(int u,vector<int> v[],vector<int> &vs){
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int i=0;i<v[t].size();i++){
            if(vs[v[t][i]]==0) {
                q.push(v[t][i]);
                vs[v[t][i]] = 1;
                a[u][v[t][i]] = 1;
            }
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
        bfs(i,v,vs);
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