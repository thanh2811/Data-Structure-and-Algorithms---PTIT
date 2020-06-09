#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,u,x,y;
    cin>>n>>m>>u;
    vector<int> v[10005];
    vector<int> vs(10005,0);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        // v[y].push_back(x);
    }
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int t = q.front();
        cout<<t<<" ";
        vs[t] = 1;
        q.pop();
        if(v[t].size()){
            For(i,0,v[t].size()-1){
                if(vs[v[t][i]]==0) {
                    q.push(v[t][i]);
                    vs[v[t][i]] = 1;
                }
            }
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