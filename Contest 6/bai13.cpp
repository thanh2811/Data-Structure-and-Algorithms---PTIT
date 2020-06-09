#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x,a,d=0;
    cin>>n>>x;
    For(i,1,n){
        cin>>a;
        if(a==x) d++;
    }
    if(d) cout<<d<<endl;
    else cout<<-1<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}