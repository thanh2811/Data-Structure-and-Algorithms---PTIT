#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int f[105][105][105];
void Res(){
    int n,m,p;
    cin>>n>>m>>p;
    string a,b,c;
    cin>>a>>b>>c;
    For(i,0,n){
        For(j,0,m){
            For(k,0,p){
                if(i==0 || j==0 || k==0) f[i][j][k]=0;
                else if(a[i-1]==b[j-1] && b[j-1]==c[k-1]) f[i][j][k]=f[i-1][j-1][k-1]+1;
                else
                    f[i][j][k]=max(f[i-1][j][k],max(f[i][j-1][k],f[i][j][k-1]));
            }
        }
    }
    cout<<f[n][m][p]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}