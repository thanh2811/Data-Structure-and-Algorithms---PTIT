/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,a[20],b[20];
void out(){
    cout<<"[";
    For(i,1,n){
        cout<<b[i];if(i!=n) cout<<" ";
        a[i]=b[i];
    }
    cout<<"]\n";
}
void Try(int k){
    if(k==0) return;
    for(int i=1;i<=k;i++){
        b[i]=a[i]+a[i+1];
    }
    n=k;
    out();
    return Try(k-1);
}
void Res(){
    cin>>n;
    For(i,1,n) {cin>>a[i];b[i]=a[i];}
    out();
    Try(n-1);
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}