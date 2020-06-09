/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,m,a[200][200];
int ans=0;
void Try(int i,int j){
    if(i==n&&j==m) {ans++;return;}
    if(i<n) Try(i+1,j);
    if(j<m) Try(i,j+1);
}

void Res(){
    cin>>n>>m;
    For(i,1,n) For(j,1,m) cin>>a[i][j];
    Try(1,1);
    cout<<ans<<endl;
    ans=0;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}