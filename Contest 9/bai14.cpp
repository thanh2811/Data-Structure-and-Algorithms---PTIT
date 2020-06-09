#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int bfs(int u,int s,vector<int> v[],vector<int> &vs){
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int i=0;i<v[t].size();i++){
            if(vs[v[t][i]]==0) {
                q.push(v[t][i]);
                if(v[t][i] == s) return 1;
                vs[v[t][i]] = 1;
            }
        }
    }
    return 0;
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[10005];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ques;
    cin>>ques;
    while(ques--){
        cin>>x>>y;
        vector<int> vs(10005,0);
        if(bfs(x,y,v,vs)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        
    }
}