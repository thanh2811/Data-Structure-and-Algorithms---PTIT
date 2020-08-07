#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<vector<int> > v(n+1);
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++) {
        cout<<i<<": ";
        sort(v[i].begin(),v[i].end());
        for(int j=0;j<v[i].size();j++)  cout<<v[i][j]<<" ";
        cout<<'\n';
    }
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
