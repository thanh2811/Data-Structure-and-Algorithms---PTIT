#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    ll p,q;
    cin>>p>>q;
    ll x=__gcd(p,q);
    p/=x;q/=x;
    if(p==1) cout<<1<<"/"<<q;
    else{
        while(p!=1){
            ll d=q/p;
            cout<<1<<"/"<<d+1<<" + ";
            p=p*(d+1)-q;
            q=q*(d+1);
            ll k = __gcd(p,q);
            p/=k;q/=k;
        }
        cout<<1<<"/"<<q;
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}