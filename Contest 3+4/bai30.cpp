#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
const int p = 1e9+7;
struct matran
{
    ll c[3][3];
    matran(){
        c[1][1]=0;c[1][2]=1;
        c[2][1]=1;c[2][2]=1;
    }
};
matran operator*(matran a,matran b){
    matran res;
    for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            res.c[i][j]=0;
            for(int x=1;x<=2;x++){
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
    int n;
    cin>>n;
    matran a;
    a = ex(a,n-1);
    cout<<a.c[2][2]<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}