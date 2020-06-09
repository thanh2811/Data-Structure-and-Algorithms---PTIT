/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,pos,ok;
ll a[100];
string s;

void Try(int n,int index,int d){
    cout<<a[index]<<" "<<s[index]<<endl;
    // if(pos==val){
    //     For(i,0,s.length()-1) if(a[i]==pos){
    //         cout<<s[i]<<endl;
    //         ok=1;
    //         return;
    //     }
    // }
    if(n>pos*2) return;
    if(ok==0)
        for(int i=0;i<s.length();i++){
            while(1){
                a[i] = a[i]+n+1;
                Try(n*2,i,d+1);
                a[i] = a[i]-n-1;
            }
    }
}

void Res(){
    ok=0;
    cin>>s>>pos;
    n=s.length();
    For(i,0,n-1) a[i]=i;
    Try(n,0,1);
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}