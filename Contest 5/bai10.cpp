#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int a[1005][1005],f[1005][1005];
void Res(){
    int n,m;
    cin>>n>>m;
    For(i,1,n) For(j,1,m) cin>>a[i][j];
    For(i,0,m) a[0][i] = INT_MAX;
    For(i,0,n) a[i][0] = INT_MAX;
    a[0][0]=0;
    For(i,1,n) For(j,1,m){
        a[i][j] += (min(a[i-1][j-1], min(a[i-1][j],a[i][j-1])));
    }
    cout<<a[n][m]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}