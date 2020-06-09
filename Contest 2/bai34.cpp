/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,a[10][10];
int cp[100],h[100],ans=0,s=0;
map<int,int> cc;

void Try(int j){
    for(int i=1;i<=n;i++){
        if(cc[i-j]&&cp[i+j]&&h[i]){
            cc[i-j]=0;
            cp[i+j]=0;
            h[i]=0;
            s+=a[i][j];
            if(j==n){
                ans=max(ans,s);
            }
            Try(j+1);
            cc[i-j]=1;
            cp[i+j]=1;
            h[i]=1;
            s-=a[i][j];
        }
    }
}

void Res(){
    n=8;
    For(i,1,n) For(j,1,n) cin>>a[i][j];
    For(i,2,2*n) cp[i]=1;
    For(i,1-n,n-1) cc[i]=1;
    For(i,1,n) h[i]=1;
    Try(1);
    cout<<ans<<endl;
    ans=0;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}