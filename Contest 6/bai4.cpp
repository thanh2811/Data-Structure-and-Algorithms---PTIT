#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    int a[n+1],b[m+1];
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    vector<int> f;
    int i=1,j=1;
    while(i<=n && j<=m){
        if(a[i]<b[j]) cout<<a[i++]<<" ";
        else if(a[i]>b[j]) cout<<b[j++]<<" ";
        else {
            cout<<a[i]<<" ";
            f.push_back(a[i]);
            i++;j++;
        }
    }
    while(i<=n) cout<<a[i++]<<" ";
    while(j<=m) cout<<b[j++]<<" ";
    cout<<endl;
    if(f.size()) {
        For(i,0,f.size()-1) cout<<f[i]<<" ";
        cout<<endl;
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