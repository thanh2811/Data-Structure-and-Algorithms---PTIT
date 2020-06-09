#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int p=1e9+7;
ll f[1200][1200]; 
void Res(){ 
    int n,k;
    cin>>n>>k;
    if(k==0 || k==1 ) {cout<<1<<endl;return;}
    // ll f[1200][1200];         // C(k,n) = C(k,n-1) + C(k-1,n-1);
    for(int i=0;i<=k;i++){
		for(int j=i;j<=n;j++){
			if(i==0||i==j) f[i][j]=1;
			else f[i][j]=(f[i-1][j-1]+f[i][j-1])%p;
		}
	}
	cout<< f[k][n]%p <<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}