#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,m,ans;
int r[105],par[105];

int find(int u){
    while(par[u]!=u) u = par[u];
    return par[u];
}
int merge(int u,int v){
    int a = find(u), b = find(v);
    if(a==b) return 0;
    if(r[a]==r[b]) r[a]++;
    if(r[a] < r[b]) par[a] = b;
    else par[b] = a;
    return 1;
}

void Res(){
    ans = 0;
    vector<pair<int,pair<int,int>>> v;
    cin>>n>>m;
    For(i,1,m){
        int x,y,ww;
        cin>>x>>y>>ww;
        v.push_back({ww,{x,y}});
    }
    sort(v.begin(),v.end());
    For(i,1,n){
        r[i] = 0;
        par[i] = i;
    }
    for(int i=0;i<v.size();i++){
        if(merge(v[i].second.first,v[i].second.second)) ans += v[i].first;
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