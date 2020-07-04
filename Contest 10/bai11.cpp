#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,ans;
int vs[105];

void Res(){
    ans = 0;
    vector<pair<int,int>> v[1005];
    memset(vs,0,sizeof(vs));
    cin>>n>>m;
    For(i,1,m){
        int x,y,w;
        cin>>x>>y>>w;
        v[x].push_back({y,w});
        v[y].push_back({x,w});
    }
    priority_queue<pair<int,int>> q;
    vs[1] = 1;
    q.push({1,0});
    while(!q.empty()){
        
    }    

    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}