/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,stop=0;
char a[20];
void out(){
    For(i,1,n) cout<<a[i];
    cout<<" ";
}
void sinh(){
    int i=n;
    while(i>0&&a[i]=='B') {a[i]='A';i--;}
    if(i==0) stop=1;
    else{
        a[i]='B';
    }
}
void Res(){
    cin>>n;
    For(i,1,n) a[i]='A';
    while(!stop){
        out();
        sinh();
    }
    stop=0;
    cout<<endl;
}
int main(){
    // IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}