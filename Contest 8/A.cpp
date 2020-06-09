#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x;
    cin>>n>>x;
    int a[n+1],dc=0,dl=0;
    For(i,1,n) {cin>>a[i];
        if(a[i]&1) dl++;
        else dc++;
    }
    if(dl&1 && dl>x) cout<<"YES\n";
//     else if()
//     else cout<<"NO\n";
// }
int main(){
    ios::sync_with_stdio(0);cin.tie (0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
