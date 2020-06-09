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
    int a[n+10];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    ll c=0,d=0;
    for(int i=1;i<=n;i+=2) c = c*10 + a[i];
    for(int i=2;i<=n;i+=2) d = d*10 + a[i];
    cout<<c+d<<"\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}