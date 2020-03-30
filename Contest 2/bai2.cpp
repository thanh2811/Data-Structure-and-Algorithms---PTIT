/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    int a[k+10];
    For(i,1,k) cin>>a[i];
    int i=k;
    while(i>0 && a[i]==n-k+i) i--;
    if(i==0) For(x,1,k) cout<<x<<" ";
    else{
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[i]+j-i;
        For(x,1,k) cout<<a[x]<<" ";
    }
    cout<<"\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}