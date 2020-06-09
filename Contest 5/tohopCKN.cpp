#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int p = 1e9+7;

void solution(){
    int n,k;
    cin>>k>>n;
    ll f[101][101];
    for(int i=0;i<=k;i++){
        for(int j=i;j<=n;j++){
            if(i==0 || j==i) f[i][j]=1;
            else f[i][j] = (f[i-1][j-1]+f[i][j-1]) % p;
        }
    }
    cout<<f[k][n];
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        solution();
    }
}