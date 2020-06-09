#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

ll f[1005][1005];
int p = 1e9+7;

void Res(){
    int n,k;
    cin>>n>>k;
    if(k==1 || k==0) cout<<n<<"\n";
    else{
        ll ans=1;
        for(int i=n;i>n-k;i--){
            ans*=i;
            ans%=p;
        }
        cout<<ans<<endl;
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