#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x=1;
    cin>>n;
    int a[n+1];
    For(i,1,n) cin>>a[i];
    cout<<"Buoc 0: "<<a[1]<<endl;
    for(int i=2;i<=n;i++){
        int tmp = a[i],j=i-1;
        while(j>=1 && a[j]>tmp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = tmp;
        cout<<"Buoc "<<x++<<": ";
        For(k,1,i) cout<<a[k]<<" ";
        cout<<endl;
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