/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,k,a[105],s,vs[105],d;

void Try(int count,int sum){
    if(d==1) return;
    if(sum==s){
        if(count==k) {
            d=1;return;
        }
        else Try(count+1,0);
    }
    else{
        for(int i=1;i<=n;i++){
            if(vs[i] || sum+a[i]>s) continue;
            vs[i]=1;
            Try(count,sum+a[i]);
            vs[i]=0;
        }
    }
}

void Res(){
    cin>>n>>k;
    s=0;d=0;
    For(i,1,n) {
        cin>>a[i];s+=a[i];
    }
    if(s%k!=0) cout<<0<<endl;
    else{
        For(i,1,100) vs[i]=0;
        s/=k;
        Try(1,0);
        if(d) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
int main(){
    // IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}