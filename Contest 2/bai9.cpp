/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n;

void Res(){
    cin>>n;
    vector<string> a;
    a.push_back("0");
    a.push_back("1");
    for(int i=2;i<=n;i++){
        for(int j=a.size()-1;j>=0;j--){
            a.push_back(a[j]);
        }
        int pos = a.size();
        for(int j=0;j<pos/2;j++){
            a[j] = "0" + a[j];
        }
        for(int j=pos/2;j<pos;j++){
            a[j] = "1" + a[j];
        }
    }
    For(i,0,a.size()-1) cout<<a[i]<<" ";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        cout<<endl;
    }
}