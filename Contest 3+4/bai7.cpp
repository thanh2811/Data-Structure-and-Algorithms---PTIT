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
    ll a[n+10],b[n+10];
    For(i,1,n) cin>>a[i];
    For(j,1,n) cin>>b[j];
    sort(a+1,a+1+n);
    sort(b+1,b+1+n,greater<int>());
    ll s=0;
    For(i,1,n) s+=a[i]*b[i];
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