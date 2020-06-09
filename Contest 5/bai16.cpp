#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    ll a[n+1],f[n+1];
    For(i,1,n) cin>>a[i];
    f[1]=a[1];
    ll ans=a[1];
    for(int i=2;i<=n;i++){
        ll s=a[i];
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) s = max(s,a[i]+f[j]); // 1 101 2 3 100 4 5
        }
        f[i]=s;
        ans=max(ans,s);
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