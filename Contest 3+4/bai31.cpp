#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
const int p = 1e9+7;
int n;
struct matran
{
    ll c[12][12];
};
matran operator*(matran a,matran b){
    matran res;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            res.c[i][j]=0;
            for(int x=1;x<=n;x++){
                res.c[i][j]+=(a.c[i][x]*b.c[x][j])%p;
            }
            res.c[i][j]%=p;
        }
    }
    return res;
}
matran ex(matran a,int n){
    if(n==1) return a;
    matran s=ex(a,n/2);
    if(n%2==0) return s*s;
    else return s*s*a;
}

void Res(){
    int k;
    cin>>n>>k;
    matran a;
    For(i,1,n) For(j,1,n) cin>>a.c[i][j];
    a = ex(a,k);
    For(i,1,n){
        For(j,1,n) cout<<a.c[i][j]<<" ";
        cout<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}