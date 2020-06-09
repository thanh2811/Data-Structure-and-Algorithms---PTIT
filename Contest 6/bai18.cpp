#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    vector<int> v;
    For(i,1,n+m){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    For(i,0,v.size()-1) cout<<v[i]<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}