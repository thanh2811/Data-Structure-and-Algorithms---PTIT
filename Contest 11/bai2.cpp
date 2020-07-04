#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

ll cal(char x,ll a,ll b){
    if(x=='+') return a+b;
    if(x=='-') return a-b;
    if(x=='*') return a*b;
    if(x=='/') return a/b;
}
void Res(){
    int n;
    cin>>n;
    ll a[100];
    queue<ll> th;
    stack<char> tt;
    For(i,1,n/2) {
        char x; cin>>x;
        tt.push(x);
    }
    For(i,1,n/2+1) cin>>a[i];
    for(int i=n/2+1;i>=1;i--) th.push(a[i]);
    while(!th.empty()){
        ll th1 = th.front(); th.pop();
        ll th2 = th.front(); th.pop();
        char op = tt.top(); tt.pop();
        if(th.empty()){
            cout<<cal(op,th2,th1)<<'\n';
            return;
        }
        th.push(cal(op,th2,th1));
    }


}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}