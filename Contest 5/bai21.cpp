#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
const int p = 1e9+7;
void Res(){
    int n,k;
    cin>>n>>k;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    vector<ll> f(k+5,0);  // f[i] là số cách tạo ra tổng = i từ mảng a[] --> tìm f[k] ?
    f[0] = 1;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=n;j++){
            if(i>=a[j]) f[i] += f[i-a[j]], f[i]%=p;;
        }
    }
    cout<<f[k]<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}