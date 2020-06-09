/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,s,a[105],b[105],kt;
void out(int k){
    cout<<"[";
    for(int i=1;i<k;i++) cout<<b[i]<<" ";
    cout<<b[k]<<"] ";
}
void Try(int i,int sum,int k){
    if(sum==s){
        kt=1;
        out(k-1);return;
    }
    else{
        for(int j=i;j<=n;j++){
            b[k]=a[j];
            if(sum+a[j]<=s) {
                Try(j,sum+a[j],k+1);
            }
        }
    }
}

void Res(){
    kt=0;
    cin>>n>>s;
    For(i,1,n) cin>>a[i];
    sort(a+1,a+1+n);
    Try(1,0,1);
    if(kt==0) cout<<-1;
    cout<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}