#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    ll ans=0;
    for(int i=0;i<s.length();i++){
        ll t=s[i]-'0';
        ans+=t;
        for(int j=i+1;j<s.length();j++){
            t=t*10+s[j]-'0';
            ans+=t;
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}