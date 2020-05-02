/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int m =1e9+7;
ll ex(int n,int k){
    if(k==0) return 1;
    ll s=ex(n,k/2);
    if(k&1) return (s*s%m)*n%m;
    else return s*s%m;
}

void Res(){
    int n,k;
    cin>>n>>k;
    cout<<ex(n,k)<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}