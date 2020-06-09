/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,a[15],k,vs[15],kt=0;
void Try(int i,int s){
    if(s==k){
        kt=1;
        int d=0,m=0;
        for(int x=1;x<=n;x++){
            if(vs[x]==1) d++;
        }
        cout<<"[";
        for(int x=1;x<=n;x++){
            if(vs[x]==1) {m++;cout<<a[x];if(m!=d) cout<<" ";}
        }
        cout<<"] ";
    }
    else {
        for(int j=i;j<=n;j++){
            if(vs[j]==0){
                vs[j]=1;
                if(s+a[j]<=k) Try(j+1,s+a[j]);
                vs[j]=0;
            }
        }
    }
}

void Res(){
    cin>>n>>k;
    For(i,1,n) cin>>a[i];
    sort(a+1,a+n+1);
    For(i,1,n+1) vs[i]=0;
    Try(1,0);
    if(kt==0)cout<<"-1";
    cout<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        kt=0;
    }
}