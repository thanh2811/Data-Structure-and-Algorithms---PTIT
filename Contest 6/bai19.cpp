#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int f[n+5],d=0;
    map<int,int> b;
    For(i,1,n){
        cin>>f[i];
        b[f[i]]++;
    }
    sort(f+1,f+1+n);
    For(i,f[1],f[n]){
        if(b[i]==0) d++;
    }
    cout<<d<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}