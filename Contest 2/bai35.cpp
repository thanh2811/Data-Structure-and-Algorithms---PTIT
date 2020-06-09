/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,k,s,a[40],ans=0,ok=1;

void Try(int i,int sum){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i]=j;
        if(sum+j==s && i==k) {ans++;return;}
        if(i<k&&sum+j<=s) Try(i+1,sum+j);
    }
}

void Res(){
    cin>>n>>k>>s;
    if(n==0 && k==0 && s==0) {ok=0;return;}
    a[0]=0;
    Try(1,0);
    cout<<ans<<endl;;
    ans=0;
}
int main(){
    IOS;
    while(ok){
        Res();
    }
}