#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x=1;
    cin>>n;
    int a[n+10];
    For(i,1,n) cin>>a[i];
    For(i,1,n-1){
        int tmp=i;
        for(int j=i+1;j<=n;j++){
            if(a[j]<a[tmp]){
                tmp = j;
            }
        }
        if(tmp!=i)
            swap(a[i],a[tmp]);
            cout<<"Buoc "<<x++<<": ";
            For(k,1,n) cout<<a[k]<<" ";
            cout<<endl;
        // }
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}