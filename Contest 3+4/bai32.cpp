#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
ll ans=0;
ll Count(ll a[], int l,int m,int r){
    int i=0,j=0,k=l;
    int n1=m-l+1,n2=r-m;
    ll L[n1+3],R[n2+3];
    For(x,0,n1-1) L[x]=a[l+x];
    For(x,0,n2-1) R[x]=a[x+m+1];
    ll res=0;
    while(i<n1&&j<n2){
        if(L[i]>R[j]){
            res+=n1-i;
            a[k++]=R[j++];
        }
        else a[k++]=L[i++];     
    }    
    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
    return res;
}

int merge(ll a[],int l,int r){
    if(l<r){
        int m = l + (r-l)/2;
        merge(a,l,m);
        merge(a,m+1,r);
        ans += Count(a,l,m,r);
        // return ans;
    }
}

void Res(){
    int n;
    cin>>n;
    ll a[n+3];
    For(i,0,n-1) cin>>a[i];
    merge(a,0,n-1);
    // For(i,0,n-1) cout<<a[i]<<" ";
    cout<<ans<<'\n';
    ans=0;    
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}