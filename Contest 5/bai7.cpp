#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int p = 1e9+7;
void Res(){
    int n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<'\n';
        return;
    }
    vector<ll> f(100005,0);
    f[0]=0;f[1]=1;
    ll s=1;
    for(int i=2;i<=n;i++){
        if(i<=k){
            f[i]=(s+1)%p;
            s+=f[i];
            s%=p;
        }
        else{
            s=0;
            for(int j=i-k;j<i;j++){
                f[i]+=f[j];
                f[i]%=p;
            }
            // f[i]%=p;
        }
    }
    cout<<f[n]<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}