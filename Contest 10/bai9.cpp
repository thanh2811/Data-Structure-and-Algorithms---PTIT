#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

vector<int> v[100005];
vector<pair<int,int>> path;
int vs[100005];
int n,m,ok,start,k;

int bfs(int u){
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()){
        int f = q.front(); q.pop();
        for(int i=0;i<v[f].size();i++){
            int x = v[f][i];
            if(vs[x]==0){
                vs[x] = 1;
                path.push_back({f,x});
                q.push(x);
                k++;
                if(k==n) return 1;
            }
        }
    }
    return 0;
}

void Res(){
    memset(vs,0,sizeof(vs));
    cin>>n>>m>>start;
    For(i,1,n) v[i].clear();
    path.clear();
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    k = 1;
    if(bfs(start)){
        For(i,0,n-2) cout<<path[i].first<<" "<<path[i].second<<'\n';
    }
    else cout<<"-1\n";

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}