/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,a[30][30],vs[30]={0};
int mx = INT_MAX;

int check(){
    For(i,1,n) if(vs[i]==0) return 0;
    return 1;
}

void Try(int i,int s){
    if(s<mx){
        if(check()){
            mx=min(mx,s+a[i][1]);
        }
        else{
            for(int j=1;j<=n;j++){
                if(vs[j]==0){
                    vs[j]=1;
                    Try(j,s+a[i][j]);
                    vs[j]=0;
                }
            }
        }
    }
}

void Res(){
    cin>>n;
    For(i,1,n) For(j,1,n) cin>>a[i][j];
    vs[1]=1;
    Try(1,0);
    cout<<mx;
}
int main(){
    IOS;
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}