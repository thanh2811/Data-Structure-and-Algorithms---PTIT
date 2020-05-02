/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,k;
    cin>>n>>k;
    if(9*k<n) cout<<-1;
    else{
        int d=n/9,m=n%9;
        if(m==0){
            k=k-d+1;
            if(k>1) {
                cout<<1;
                for(int i=1;i<k-1;i++) cout<<0;
                cout<<8;
            }
            else cout<<9;
            for(int i=1;i<d;i++) cout<<9;
        }
        else {
            k-=d;
            if(k>1) cout<<1;
            for(int i=1;i<k-1;i++) cout<<0;
            if(k>1) cout<<m-1;
            else cout<<m;
            For(i,1,d) cout<<9;
        }
    }
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