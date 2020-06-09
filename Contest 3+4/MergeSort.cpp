#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Merge(int a[],int l,int m,int r){
    int i=1,j=1,k=l;
    int n1=m-l+1,n2=r-m;
    int L[n1+10],R[n2+10];
    For(x,1,n1) L[x]=a[l+x-1];
    For(x,1,n2) R[x]=a[m+x];
    while(i<=n1&&j<=n2){
        a[k++] = (L[i]>=R[j]) ? R[j++]:L[i++];
    } 
    while(i<=n1) a[k++]=L[i++];
    while(j<=n2) a[k++]=R[j++];
}

void MergeSort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}

void Res(){
    int n;
    cin>>n;
    int a[n+3];
    For(i,1,n) cin>>a[i];
    MergeSort(a,1,n);
    For(i,1,n) cout<<a[i]<<" ";
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