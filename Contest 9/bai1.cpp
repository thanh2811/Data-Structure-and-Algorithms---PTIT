#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[n+1];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        cout<<i<<": ";
        sort(v[i].begin(),v[i].end());
        for(int j=0;j<v[i].size();j++)  cout<<v[i][j]<<" ";
        cout<<'\n';
    }
    // v.clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
