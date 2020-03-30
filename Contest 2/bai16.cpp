/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

int n,s,a[12][12],b[12];
int stop=0,ans=0;

void dem(){
    int t=0;
    For(i,1,n){
        t+=a[i][b[i]];
    }
    if(t==s){
        ans++;
    }
}
void out(){
    int t=0;
    For(i,1,n){
        t+=a[i][b[i]];
    }
    if(t==s){
        For(i,1,n) cout<<b[i]<<" ";
        cout<<endl;
    }
}

void sinhhv(){
    int i=n-1;
    while(i>0&&b[i]>b[i+1]) i--;
    if(i==0) stop=1;
    else{
        int j=n;
        while(b[i]>b[j]) j--;
        swap(b[i],b[j]);
        int d=i+1,c=n;
        while(d<=c){swap(b[d],b[c]);d++;c--;}
    }
}


void Res(){
    cin>>n>>s;
    For(i,1,n) b[i]=i;
    For(i,1,n) For(j,1,n) cin>>a[i][j];
    while(!stop){
        dem();
        sinhhv();
    }
    cout<<ans<<"\n";
    For(i,1,n) b[i]=i;
    stop=0;
    while(!stop){
        out();
        sinhhv();
    }
}
int main(){
    IOS;
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}