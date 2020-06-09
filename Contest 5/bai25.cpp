#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    ll f[n+10];
    f[1]=1;f[2]=2;f[3]=4;
    For(i,4,n) f[i]=f[i-1]+f[i-2]+f[i-3];
    cout<<f[n]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}