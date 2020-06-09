/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
string s;
char a[12];
int n,vst[12]={0};
void out(){
    For(i,0,n-1) cout<<a[i];
    cout<<" ";
}
void Try(int i){
    for(int j=0;j<n;j++){
        if(vst[j]==0){
            vst[j]=1;
            a[i]=s[j];
        if(i==n-1) out();
        else Try(i+1);
        vst[j]=0;
        }
    }
}

void Res(){
    cin>>s;
    n=s.length();
    For(i,0,n) vst[i]=0;
    Try(0);
    cout<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}