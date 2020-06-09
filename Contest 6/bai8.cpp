#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

ll count_pairs(int b[],int m,int x,int Spe[]){
    if(x==1) return 0;
    // if(x==0) return 0;
    int ans = (upper_bound(b+1,b+1+m,x)-b);
    // cout<<ans<<" ";
    ans = m - ans + 1;
    ans += Spe[0] + Spe[1];
    if(x==2) ans -= (Spe[3] + Spe[4]);
    if(x==3) ans += Spe[2];
    return ans;
}


void Res(){
    int n,m;
    cin>>n>>m;
    int a[n+5],b[m+5],Spe[5]={0};
    For(i,1,n) cin>>a[i];
    For(i,1,m) {
        cin>>b[i];
        if(b[i]<5) Spe[b[i]]++;  
    }
    ll ans=0;
    sort(b+1,b+1+m);
    For(i,1,n) ans += count_pairs(b,m,a[i],Spe);
    cout<<ans<<endl; 
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}