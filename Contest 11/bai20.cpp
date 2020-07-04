#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    For(i,1,n-1){
        if(a[i] >= a[i+1]) {cout<<"0\n";return;}
    }    
    cout<<"1\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}