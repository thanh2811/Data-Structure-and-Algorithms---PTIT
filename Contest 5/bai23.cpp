#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    int ans=1,f[n+5];
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<=a[i]) f[i]=max(f[i],f[j]+1);
        }
        ans=max(ans,f[i]);
    }
    cout<<n-ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}