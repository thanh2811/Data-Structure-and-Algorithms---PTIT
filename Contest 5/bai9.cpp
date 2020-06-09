#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

ll f[105][50005]; //f[i][j] là số các số có i chữ số tổng bằng j --> Find f[n][k] ? 
int p = 1e9+7;

void Res(){
    int n,s;
    cin>>n>>s;
    memset(f,0,sizeof(f));
    for(int i=1;i<=s;i++){
        if(i<10) f[1][i] = 1;
        else break;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=min(9*i,s);j++){
            for(int x=0;x<=9;x++){
                f[i][j] += f[i-1][j-x];
                f[i][j] %= p;
            }
        }
    }
    // For(i,0,n){For(j,0,s)cout<<f[i][j]<<" ";cout<<endl;}
    cout<<f[n][s]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}