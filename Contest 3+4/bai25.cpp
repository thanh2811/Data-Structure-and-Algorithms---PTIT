#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n;

char Find(ll f[],int n,ll k)
{
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(k>f[n-2]) return Find(f,n-1,k-f[n-2]);
    return Find(f,n-2,k);
}

void Res(){
    ll k;
    cin>>n>>k;
    ll f[100];
    f[1]=1;f[2]=1;
    For(i,3,92) f[i]=f[i-1]+f[i-2];
    cout<<Find(f,n,k)<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}