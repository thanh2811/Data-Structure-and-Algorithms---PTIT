#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int f[n+2][n+2];// Goij f[m][v] là số cách phân tích số v thành tổng các số nhỏ hơn hoặc bằng m
    f[0][0]=1;      // ->> tìm f[n][n];
    for(int i=0;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==0) f[i][j]=0;
        }
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