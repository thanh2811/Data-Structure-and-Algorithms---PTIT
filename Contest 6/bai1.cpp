#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    sort(a+1,a+n+1,greater<int>());
    for(int i=1;i<=n/2;i++){
        cout<<a[i]<<" "<<a[n-i+1]<<" ";
    }
    if(n&1) cout<<a[n/2+1];
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