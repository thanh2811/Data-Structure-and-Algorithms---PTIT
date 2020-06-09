#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,s;
    cin>>n>>s;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    int f[40005]={0};
    f[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=a[i];j--){
            if(f[j-a[i]]==1) f[j]=1;
        }
    }
    if(f[s]==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}