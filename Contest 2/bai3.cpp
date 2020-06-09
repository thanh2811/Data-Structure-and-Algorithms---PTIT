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
    int i=n-1;
    while(i>0 && a[i]>a[i+1]) i--;
    if(i==0) For(i,1,n) cout<<i<<" ";
    else{
        int j=n;
        while(a[j]<a[i]) j--;
        swap(a[j],a[i]);
        int d=i+1,c=n;
        while(d<=c){
            swap(a[d],a[c]);
            d++;c--;
        }
        For(i,1,n) cout<<a[i]<<" ";
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