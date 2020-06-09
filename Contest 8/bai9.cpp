#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,m;
    cin>>n>>m;
    int ans = 0;
    while(n<m){
        if(m%2) m++,ans++;
        else m/=2, ans++;
    }
    cout<<ans+n-m<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}