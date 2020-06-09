#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

ll Res(){
    int n;
    cin>>n;
    if(n==1) return 1;
    priority_queue<ll,vector<ll>,greater<ll>> v;
    v.push(2);v.push(3);v.push(5);
    map<ll,int> m;
    vector<ll> a;
    for(int i=1;i<=n;i++){
        ll t = v.top();
        v.pop();
        if(m[t*2]==0) {v.push(t*2);m[t*2]=1;}
        if(m[t*3]==0) {v.push(t*3);m[t*3]=1;}
        if(m[t*5]==0) {v.push(t*5);m[t*5]=1;}
        a.push_back(t);
    }
    return a[n-2];
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        cout<<Res()<<endl;
    }
}