#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int mod = 1e9+7;

ll ex(ll t,ll u){
    if(u==0) return 1;
    ll s=ex(t,u/2);
    if(u&1) return (s*s%mod)*t%mod;
    return s*s%mod;
}

void Res(){
    ll s,x;
    cin>>s;
    ll t=s,u=0;
    while(s){
        u=u*10+s%10;
        s/=10;
    }
    cout<<ex(t,u)<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}