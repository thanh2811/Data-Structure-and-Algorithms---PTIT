#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

typedef pair<int,int> ii;
int n,m;
vector<ii> v[10005];

void Dijkstra(int start){
    int d[n+1];
    For(i,1,n) d[i] = 1e9; // distance from start to i
    d[start] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0,start});

    while(!q.empty()){
        int u = q.top().second, du = q.top().first;
        q.pop();
        for(int i=0;i<v[u].size();i++){
            int adj = v[u][i].second;
            int w = v[u][i].first;
            if(d[adj] > du + w){
                d[adj] = du + w;
                q.push({d[adj],adj});
            }
        }
    }
    For(i,1,n) cout<<d[i]<<' ';
    cout<<'\n';
}

void Res(){
    int start;  
    cin>>n>>m>>start;
    For(i,1,m){
        int u1,u2,w;
        cin>>u1>>u2>>w;
        v[u1].push_back({w,u2});
        v[u2].push_back({w,u1});
    } 
    Dijkstra(start);
    For(i,0,n) v[i].clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}