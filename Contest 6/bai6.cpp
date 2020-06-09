#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int d1=0,d2=0,x;
    For(i,1,n){
        cin>>x;
        if(x==0) cout<<"0 ";
        else if(x==1) d1++;
        else d2++;
    }
    For(i,1,d1) cout<<"1 ";
    For(i,1,d2) cout<<"2 ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}