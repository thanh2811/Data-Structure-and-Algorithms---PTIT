/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
string a,b;
int minmax(string a,int x,int y){
    int t1=0;
    for(int i=0;i<a.length();i++){
        int k=a[i]-'0';
        if(k==x) k = y;
        t1 = t1*10 + k;
    }
    return t1;
}

void Res(){
    // string a,b;
    cin>>a>>b;
    cout<<minmax(a,6,5)+minmax(b,6,5)<<" "<<minmax(a,5,6)+minmax(b,5,6);
}
int main(){
    IOS;
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}