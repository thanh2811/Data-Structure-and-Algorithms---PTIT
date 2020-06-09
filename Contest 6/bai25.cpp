#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    vector<int> a(n+5);
    int m1 = INT_MAX,m2=INT_MAX;
    For(i,1,n){
        cin>>a[i];
        m1=min(m1,a[i]);
    }
    For(i,1,n){
        if(a[i]!=m1) m2=min(m2,a[i]);
    }
    if(m1==m2 || m2==INT_MAX) cout<<-1<<endl;
    else cout<<m1<<" "<<m2<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}