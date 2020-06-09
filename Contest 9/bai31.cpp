#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m,x,y;
    cin>>n;
    vector<int> v[10005];
    For(i,1,n-1){
        cin>>x>>y;
        // v[x].push_back(y);
        v[y].push_back(x);
   }
   For(i,1,n){
       if(v[i].size()>1){
           cout<<"NO\n";
           return;
       }
   }
   cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}