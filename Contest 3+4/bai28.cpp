#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int ans=0;
void Res(){
    int n;
    cin>>n;
    int a[n+2];
    ans=0;
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    int i=1,j=n/2+1;
    while(i<=n/2&&j<=n){
        if(a[i]*2<=a[j]) ans++,i++,j++;
        else j++;
    }
    cout<<n-ans<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}