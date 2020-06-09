#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    if(s[0]=='0') {cout<<0<<endl;return;}
    int n=s.length();
    vector<ll> f(n+5,0); // f[i] là số cách decode từ 1->i
    f[0] = 1;
    f[1] = 1;
    for(int i=2;i<=n;i++){
        if(s[i-1]>'0') f[i] = f[i-1];
        if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<='6')) f[i] += f[i-2];
    }    
    cout<<f[n]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}