/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,stop=0,b[12];

void sinh(){
    int i=n;
    while(b[i]==1&&i>0){b[i]=0;i--;}
    if(i==0) stop=1;
    else b[i]=1;
}

void Res(){
    string s;
    cin>>s;
    n=s.length();
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
    // For(i,0,a.size()-1) cout<<a[i]<<" ";
    For(i,1,n) b[i]=0;
    int res=0;
    while(!stop){
        int kt=1;
        For(i,0,n-1){
            if(b[i+1]!=s[i]-'0'){
                kt=0;break;
            }
        }
        if(kt==1) break;
        res++;
        // For(j,1,n) cout<<b[j];
        // cout<<" ";
        sinh();
    }
    cout<<a[res]<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        stop=0;
    }
}