#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

vector<int> v[10005];
int vs[10005];

int bfs(int dt){
    int u;
    if(dt==1) u = 2;
    else u = 1;
    vs[u] = 1;
    vs[dt] = 1;
    int n = 0;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int t = q.front(); q.pop();
        n++;
        for(int i=0;i<v[t].size();i++){
            int x = v[t][i];
            if(vs[x]==0){
                vs[x] = 1;
                q.push(x);
            }
        }
    }
    return n+1;
}

void Res(){
    int n,m;
    cin>>n>>m;
    For(i,1,n) v[i].clear();
    For(i,1,m){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        memset(vs,0,sizeof(vs));
        if(bfs(i) != n){
            cout<< i <<" ";
        }
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}