#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
vector<int> v[10005];
int n,m,x,y;

int check(int d){
    if(d==0) return 2;
    if(d==2) return 1;
    return 0;    
}

void Res(){
    int n,m,x,y;
    cin>>n>>m;
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int d = 0;
    For(i,1,n) if(v[i].size()&1) d++;
    cout<<check(d)<<'\n';
    For(i,1,n) v[i].clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}