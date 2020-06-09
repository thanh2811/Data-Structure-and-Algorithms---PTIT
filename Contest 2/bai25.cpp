/*
-------> Code by @thanh28 <-------
*/



#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,a[105];
void Res(){
    cin>>n;
    int s=0;
    For(i,1,n) {cin>>a[i];s+=a[i];}
    if(s%2!=0) cout<<"NO";
    else {
        s/=2;
        int f[s+10]={0};
        f[0]=1;
        For(i,1,n){
            for(int j=s;j>=i;j--){
                if(f[j-a[i]]==1) f[j]=1;
            }
        }
        if(f[s]) cout<<"YES";
        else cout<<"NO"; 
    }
    cout<<"\n";
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}