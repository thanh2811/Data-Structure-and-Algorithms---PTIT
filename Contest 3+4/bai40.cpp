#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int Find(int a[],int l,int r){
    int mid=(l+r)/2;
    if(a[mid]==0&&a[mid+1]==1) return mid;
    if(a[mid]==1&&a[mid-1]==0) return mid-1;
    if(a[mid]==0&&a[mid-1]==0) return Find(a,mid+1,r);
    if(a[mid]==1&&a[mid+1]==1) return Find(a,l,mid-1);
}

void Res(){
    int n;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    if(a[0]==1) cout<<0;
    else if(a[n]==0) cout<<n;
    else{
        int x=Find(a,1,n);
        cout<<x;
    }
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