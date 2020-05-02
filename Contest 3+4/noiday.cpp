/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    priority_queue<ll,vector<ll>, greater<ll> > q;
    For(i,1,n){
        int x;
        cin>>x;
        q.push(x);
    }
    ll ans=0;
    int mod = 1e9+7;
    while(1){
        ll a=q.top();q.pop();
        ll b=q.top();q.pop();
        a%=mod;b%=mod;
        ans+=a+b;
        ans%=mod;
        q.push((a+b)%mod);
        if(q.size()==1){
            break;
        }
    }
    // int mod = 1e9+7;
    cout<<ans%mod;
}
int main(){
    IOS;
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}