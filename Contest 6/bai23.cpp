#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    vector<int> a(n+5);
    For(i,1,n-1) cin>>a[i];
    For(i,1,n){
        if(a[i]!=i) {
            cout<<i<<endl;return;
        }
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