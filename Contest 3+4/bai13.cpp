/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int d;
    string s;
    cin>>d>>s;
    int n=s.length();
    int a[200]={0};
    For(i,0,n-1) a[s[i]]++;
    sort(a,a+91);
    // vector<int> b;
    // for(int i=90;i>=65;i--) {
    //     if(a[i]==0) break;
    //     b.push_back(a[i]);
    // }
    // int x=0;
    // vector<int> c(n+5,0);
    // for(int i=0;i<n;i++){
    //     if(c[i]==0){
    //         for(int j=0;j<b[x];j++){
    //             if(i+j*d>=n){
    //                 cout<<-1<<endl;return;
    //             }
    //             c[i+j*d]=1;
    //         }
    //         x++;
    //     }
    // }
    if((a[90]-1)*d<=n-1) cout<<1;
    else cout<<-1;
    cout<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}