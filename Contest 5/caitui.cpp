#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    int w[n+2],c[n+2];
    For(i,1,n) cin>>w[i]>>c[i];
    // For(i,1,n) cin>>c[i];
    int f[123][123]; // f[i][j] là giá trị lớn nhất chọn trong i đồ vật với W max = j.
    for(int i=0;i<=m;i++) f[0][i]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            f[i][j]=f[i-1][j]; // không chọn đồ vật i
            if(w[i]<=j){
                f[i][j]=max(f[i-1][j],f[i-1][j-w[i]]+c[i]);
            }
        }
    }
    cout<<f[n][m];
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}