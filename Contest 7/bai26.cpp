#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x;
    cin>>n>>x;
    stack<pair<int,int> > stk;
    stk.push(make_pair(x,1));
    cout<<1<<" ";
    For(i,1,n-1){
        cin>>x;
        // if(x>=stk.top().first){
            int d = 1;
            while(!stk.empty() && x>=stk.top().first){
                d += stk.top().second;
                stk.pop();
            }
            stk.push(make_pair(x,d));
            cout<<d<<" ";
        // }
    }
    // cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;?
    while(test--){
        Res();
    }
}