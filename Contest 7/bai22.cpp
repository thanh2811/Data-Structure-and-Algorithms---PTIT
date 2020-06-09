#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void L(vector<pair<int,int> > &v,int a[],int n){
    stack<int> stk;
    stk.push(n);
    for(int i=n-1;i>=1;i--){
        if(!stk.empty() && a[i]<a[stk.top()]){
            while(!stk.empty() && a[i]<a[stk.top()]) {
                v[stk.top()].first = i;
                stk.pop();
            }
            stk.push(i);
        }
        else stk.push(i);
    }
}
void R(vector<pair<int,int> > &v,int a[],int n){
    stack<int> stk;
    stk.push(1);
    for(int i=2;i<=n;i++){
        if(!stk.empty() && a[i]<a[stk.top()]){
            while(!stk.empty() && a[i]<a[stk.top()]) {
                v[stk.top()].second = i;
                stk.pop();
            }
            stk.push(i);
        }
        else stk.push(i);
    }
}

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    stack<int> stk;
    vector<pair<int,int> > v(n+1,make_pair(0,n+1));
    L(v,a,n);
    R(v,a,n);
    // For(i,1,n) cout<<v[i].first<<" "<<v[i].second<<endl;
    ll ans = 0;
    For(i,1,n){
        ans = max(ans,(ll)(v[i].second - v[i].first-1)*a[i]);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}