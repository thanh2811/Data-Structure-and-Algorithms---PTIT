#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    vector<int> f(n+5,1);
    For(i,2,n){
        if(f[i]){
            for(int j=i*2;j<=n;j+=i) f[j]=0;
        }
    }
    For(i,2,n/2){
        if(f[i] && f[n-i]){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}