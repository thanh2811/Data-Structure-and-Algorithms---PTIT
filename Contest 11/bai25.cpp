#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Create_AVL_Tree(int a[],int l,int n){
    if(l>n) return;
    int m = l + (n-l)/2;
    cout<<a[m]<<" ";
    Create_AVL_Tree(a,l,m-1);
    Create_AVL_Tree(a,m+1,n);
}

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i-1];
    sort(a,a+n);
    Create_AVL_Tree(a,0,n-1);
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