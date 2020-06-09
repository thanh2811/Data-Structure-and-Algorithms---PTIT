#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    ll a[n+1],f[n+5];
    For(i,1,n) cin>>a[i];
    f[0]=0;f[1]=a[1];
    if(n>1) f[2]=a[2];
    for(int i=3;i<=n;i++){
        f[i]=max(a[i]+f[i-2],a[i]+f[i-3]);
    }
    cout<<max(f[n],f[n-1])<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}