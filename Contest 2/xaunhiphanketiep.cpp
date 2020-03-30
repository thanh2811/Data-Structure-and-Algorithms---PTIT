/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    int n=s.length();
    int i=n-1;
    while(s[i]!='0'&&i>=0){ s[i]='0';i--;}
    if(i>-1) s[i]='1';
    // For(j,i,n-1) s[j]='0';
    cout<<s<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}