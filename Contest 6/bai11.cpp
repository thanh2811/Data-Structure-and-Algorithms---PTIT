#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m=INT_MAX,ans=0;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    For(i,1,n){
        For(j,i+1,n){
            if(abs(a[i]+a[j])<m){
                ans = a[i]+a[j];
                m = abs(a[i]+a[j]);
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}