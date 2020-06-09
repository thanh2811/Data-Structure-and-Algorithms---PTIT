#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void bfs(int u,vector<int> v[],vector<int> &vs){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int t = q.front();
        vs[t] = 1;
        q.pop();
        for(int i=0;i<v[t].size();i++) {
            if(vs[v[t][i]]==0) {
                q.push(v[t][i]);
                vs[v[t][i]] = 1;
            }
        }
    }
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[n+5];
    vector<int> vs(n+5,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int d = 0;
    For(i,1,n){
        if(vs[i]==0){
            d++;
            bfs(i,v,vs);
        }
    }
    cout<<d<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}