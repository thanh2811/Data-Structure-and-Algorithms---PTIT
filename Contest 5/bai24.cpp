#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>m>>n;
    ll f[30][30]={0};
    n++;m++;
    for(int i=1;i<=25;i++){
        f[i][1] = 1; f[1][i] = 1;
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=m;j++){
            f[i][j] = f[i-1][j] + f[i][j-1];
        }
    }
    // For(i,1,n){For(j,1,m) cout<<f[i][j]<<" ";cout<<endl;}
    cout<<f[n][m]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}