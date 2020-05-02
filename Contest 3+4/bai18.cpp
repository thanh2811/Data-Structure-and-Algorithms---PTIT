/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,kt=1; 
    cin>>n;
    int d=n/7,m=n%7;
    if(m==0) For(i,1,d) {cout<<7;kt=0;}
    else if(n==4) cout<<4;
    else{
        while(d){
            if(m%4==0){
                kt=0;
                For(i,1,m/4) cout<<4;
                For(i,1,d) cout<<7;
                break;
            }
            else{
                d--;
                m+=7;
            }
        }
    }
    if(kt) cout<<-1;
    cout<<'\n';
}
int main(){
    // IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}