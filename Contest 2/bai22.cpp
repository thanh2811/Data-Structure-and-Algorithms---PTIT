/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,a[12][12],kt=0;
string s;
void Try(int i,int j){
    if(i==n-1&&j==n-1) {kt=1;cout<<s<<" ";return;}
    if(a[i+1][j]){
        s+='D';
        Try(i+1,j);
        s.erase(s.size()-1,1);
    }
    if(a[i][j+1]){
        s+='R';
        Try(i,j+1);
        s.erase(s.size()-1,1);
    }
    return;
}

void Res(){
    cin>>n;
    For(i,0,n-1) For(j,0,n-1) cin>>a[i][j];
    if(a[0][0]==0) {cout<<-1<<endl;return;}
    Try(0,0);
    if(kt==0) cout<<-1;
    cout<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        kt=0;
    }
}