#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    int d=0;
    For(i,1,n){
        For(j,i+1,n) if(a[i]+a[j]==k) d++;
    }
    // if(d==0) d=1;
    cout<<d<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}