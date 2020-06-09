#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    string s;
    cin>>n>>s;
    int f[n+10][n+10];
    For(i,0,n) For(j,0,n) f[i][j]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(s[i-1]==s[j-1] && i!=j) f[i][j]=f[i-1][j-1]+1;
            else f[i][j]=max(f[i-1][j],f[i][j-1]);
        }
    }
    cout<<f[n][n]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}