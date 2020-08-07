#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
 int n,s,ans,a[100],kt;
 
void Try(int i,ll sum,int d){
    if(d>ans) return;
    if(sum==s){
        kt=0;
        ans=min(d,ans);
    }
    else{
        for(int j=i;j<n;j++){
            if(sum+a[j]<=s){
                Try(j+1,sum+a[j],d+1);
            }
        }
    }
}
 
void Res(){
    ans=1e9;
    kt=1;
    cin>>n>>s;
    For(i,0,n-1) cin>>a[i];
    sort(a,a+n);
    Try(0,0,0);
    if(kt) ans=-1;
    cout<<ans<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}  