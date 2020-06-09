#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m=INT_MIN;
    cin>>n;
    int a[n+2];
    For(i,1,n) {cin>>a[i];m=max(m,a[i]);}
    if(m<=0) cout<<m<<'\n';
    else{
        int s=0,ans=0;
        For(i,1,n){
            s+=a[i];
            if(s<0) s=0;
            else ans = max(s,ans);
        }
        cout<<ans<<"\n";
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}