#include<bits/stdc++.h> 

using namespace std;
typedef long long ll;


ll convert_to_10(string s){
    ll a=0;
    int n = s.length();
    for(int i=n-1;i>=0;i--){
        a+=(s[i]-'0')*pow(2,n-1-i);
    }
    return a;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        ll ans = convert_to_10(a)*convert_to_10(b);
        cout<<ans<<'\n';
    }
}