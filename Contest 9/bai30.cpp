#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    vector<int> v[10005];
    vector<pair<int,int>> p(n+1,{0,0});
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        p[x].first++;
        p[y].second++;
        // v[y].push_back(x);
    }
    For(i,1,n){
        if(p[i].first != p[i].second){
            cout<<"0\n";
            return;
        }
    }
    cout<<"1\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}