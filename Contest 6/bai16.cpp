#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int Par(int a[],int l,int r){
    int pivot = a[r], last = r-1,fi = l;
   while(1){
        while(a[fi]<pivot) fi++;
        while(a[last]>pivot) last--;
        if(last<=fi) break;
        swap(a[fi],a[last]);
        fi++;last--;    
    }
    swap(a[fi],a[r]);
    return fi;
}


void QuickSort(int a[],int l,int r){
    if(l>=r) return ;
    int pivot = Par(a,l,r);
    QuickSort(a,l,pivot-1);
    QuickSort(a,pivot+1,r);
}

void Res(){
    int n;
    cin>>n;
    int a[n+5];
    For(i,1,n) cin>>a[i];
    QuickSort(a,1,n);
    For(i,1,n) cout<<a[i]<<" ";
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