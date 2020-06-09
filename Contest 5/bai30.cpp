#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int x=sqrt(n);
    if(x*x==n) cout<<1;
    else{
        int f[n+5];
        For(i,0,3) f[i]=i;
        for(int i=4;i<=n;i++){
            f[i] = i; // 4 = 1+1+1+1
            for(int j=1;j<=sqrt(i);j++){
                f[i]=min(f[i],f[i-j*j]+1);
            }
        } 
        cout<<f[n];
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}