/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

const int k = 1e9+7;

void Res(){
    int n;
    cin>>n;
    ll a[n+5];
    For(i,0,n-1) cin>>a[i];
    sort(a,a+n);
    ll s=0;
    For(i,0,n-1){
         s += i*a[i];
         s%=k;
    }
    cout<<s<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}