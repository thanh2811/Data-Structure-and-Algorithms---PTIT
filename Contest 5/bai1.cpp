#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string a,b;
    cin>>a>>b;
    int n=a.length(),m=b.length();
    vector<vector<int> > f(n+1,vector<int>(m+1,0)); // f[i][j] lÃ  Äá» dÃ i xÃ¢u con lá»n nháº¥t báº¯t Äáº§u tá»« i cá»§a str a, j cá»§a str b
    a = ' ' + a;
    b = ' ' + b;
    For(i,1,n){
        For(j,1,m){
            if(a[i]==b[j]) f[i][j] = f[i-1][j-1] + 1;
            else f[i][j] = max(f[i-1][j],f[i][j-1]);
        }
    }
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