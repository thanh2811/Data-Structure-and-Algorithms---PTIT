#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x;
    cin>>n;
    vector<vector<int> > v(n+1);
    For(i,1,n) For(j,1,n){
        cin>>x;
        if(x==1){
            v[i].push_back(j);
            // v[j].push_back(i);
        }
    }
    For(i,1,n){
        for(int j=0;j<v[i].size();j++) cout<<v[i][j]<<" ";
        cout<<'\n';
    }

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}