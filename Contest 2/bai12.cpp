#include <bits/stdc++.h>
using namespace std;

int n,k,a[100],stop=0;
void Nhap(){
    cin>>n>>k;
    for(int i=1;i<=n;i++) a[i]=0;
}
int kt(){
    int d=0;
    for(int i=1;i<=n;i++) if(a[i]==1) d++;
    return d;
}
void out(){
    if(kt()==k){
    for(int i=1;i<=n;i++) cout<<a[i];
    cout<<"\n";
    }
}
void Sinh(){
    int i=n;
    while(a[i]){
        a[i]=0;
        i--;
    }
    if(i==0) stop=1;
    else a[i]=1;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        Nhap();
        while(!stop){
           out();
           Sinh();
    }
    stop=0;
    // cout<<endl;
    }
}