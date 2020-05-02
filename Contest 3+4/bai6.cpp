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
    int a[n+2],b[n+2];
    For(i,1,n) {cin>>a[i];b[i]=a[i];}
    sort(b+1,b+n+1);
    For(i,1,n/2+1){
        if(a[i]!=b[i]){
            swap(a[i],a[n-i+1]);
            if(a[i]!=b[i]){
                cout<<"No\n";
                return;
            }
        }
    }
    cout<<"Yes\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}