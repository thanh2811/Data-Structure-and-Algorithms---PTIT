/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    int a[100]={0},n=s.length();
    For(i,0,n-1) a[s[i]]++;
    sort(a+65,a+91,greater<int>());
    vector<int> b;
    For(i,65,90) if(a[i]>0) b.push_back(a[i]);
    For(i,1,k){
        b[0]--;
        sort(b.begin(),b.end(),greater<int>());
    }
    ll ans=0;
    For(i,0,b.size()-1) ans+=b[i]*b[i];
    cout<<ans<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}