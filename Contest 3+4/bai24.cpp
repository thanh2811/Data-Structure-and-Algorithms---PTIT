#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int m =123456789;
ll ex(int n,ll k){
    if(k==0) return 1;
    ll s=ex(n,k/2);
    if(k&1) return (s*s%m)*n%m;
    else return s*s%m;
}

void Res(){
    ll n;
    cin>>n;
    cout<<ex(2,n-1)<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}