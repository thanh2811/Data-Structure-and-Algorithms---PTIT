#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int a[n+5],b[n+5];
    For(i,1,n) {cin>>a[i];b[i]=a[i];}
    sort(a+1,a+1+n);
    int f=1,l=n,kt=1;
    For(i,1,n) {
        if(a[i]!=b[i]){
            kt=0;f=i;break;
        }
    }
    if(kt==0){
        for(int j=n;j>=1;j--){
            if(a[j]!=b[j]){
                l = j;
                break;
            }
        }
        cout<<f<<" "<<l<<endl;
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