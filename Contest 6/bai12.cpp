#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    for(int i=n;i>=n-k+1;i--) cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}