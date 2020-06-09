#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int k;
    string s;
    cin>>k>>s;
    int f[100]={0};
    priority_queue<ll> q;
    For(i,0,s.length()-1) f[s[i]]++;
    For(i,65,90){
        if(f[i]) q.push(f[i]);
    }
    while(k--){
        int t = q.top();
        q.pop();
        t--;
        q.push(t);
    }
    ll ans = 0 ;
    while(!q.empty()){
        ans += q.top()*q.top();
        q.pop();
    }
    cout<<ans<<"\n";

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}