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
    int a[200]={0};
    for(int i=0;i<s.length();i++) a[s[i]]++;
    sort(a,a+123);
    int d=1;
    for(int i=121;i>=97;i--){
        d+=a[i];
        if(d>=a[122]){
            cout<<1<<'\n';
            return;
        }
    }
    cout<<-1<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}