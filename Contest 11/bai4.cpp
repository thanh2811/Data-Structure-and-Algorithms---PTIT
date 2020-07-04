#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int pre[1005];

void PostOrder(int l,int r){
    if(l>r) return;
    int i;
    for(i=l+1;i<=r;i++) if(pre[i]>pre[l]) break;
    PostOrder(l+1,i-1);
    PostOrder(i,r);
    cout<< pre[l] <<" ";
}

void Res(){
    int n;
    cin>>n;
    For(i,1,n) cin>>pre[i];
    PostOrder(1,n);
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}