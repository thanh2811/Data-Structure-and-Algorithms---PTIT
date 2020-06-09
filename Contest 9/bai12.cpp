#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,u,s,x,y;
    cin>>n>>m>>u>>s;
    vector<int> v[n+1];
    vector<int> vs(n+1,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    queue<int> q;
    q.push(u);
    int way[10005]={0};
    while(!q.empty()){
        int t = q.front();
        vs[t] = 1;
        q.pop();
        For(i,0,v[t].size()-1){
            if(vs[v[t][i]]==0) {
                q.push(v[t][i]);
                way[v[t][i]] = t;
                vs[v[t][i]] = 1;
            }
        }
    }
    if(way[s]){
        int t = s;
        vector<int> ans;
        while(t){
            ans.push_back(t);
            t = way[t];
        }
        For(i,0,ans.size()-1) cout<<ans[ans.size()-i-1]<<" ";
    }
    else cout<<-1;
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