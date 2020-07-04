#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,root,x;
    char pos;
    cin>>n;
    vector<int> v;
    while(n--){
        cin>>root>>x>>pos;
        if(v.size()==0) {
            v.push_back(root);
            v.push_back(x);
        }
        else{
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    For(i,0,v.size()-1) cout<<v[i]<<" ";
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