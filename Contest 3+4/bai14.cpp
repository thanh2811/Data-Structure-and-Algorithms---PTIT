/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
string s;
int a[100],n;
ll ans;

void solve(){
    ll t=0;
    For(i,0,n-1) if(a[i]) t=t*10+s[i]-'0';
    for(ll i=1;i<=1e6;i++){
        if(i*i*i>t) break;
        if(i*i*i==t) ans=max(ans,t);
    }
}

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n-1){
            solve();
        }
        else Try(i+1);
    }
}

void Res(){
    ans=-1;
    cin>>s;
    n=s.length();
    Try(0);
    cout<<ans<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}