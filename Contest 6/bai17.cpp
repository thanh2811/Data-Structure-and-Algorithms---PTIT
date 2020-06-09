#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    ll x=INT_MIN,y=INT_MAX,z;
    For(i,1,n){
        cin>>z;
        x=max(x,z);
    }   
    For(i,1,m){
        cin>>z;
        y=min(y,z);
    } 
    cout<<(x*y)<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}