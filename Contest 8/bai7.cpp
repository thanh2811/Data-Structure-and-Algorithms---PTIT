#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    ll n;
    cin>>n;
    queue<ll> q;
    q.push(1);
    int ans = 0;
    while(!q.empty()){
        ans++;
        ll t = q.front();
        if(t>n){
            cout<<ans-1<<'\n';return;
        }
        q.pop();
        q.push(t*10);q.push(t*10+1);
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}