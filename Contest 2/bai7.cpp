/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,k,a[15],stop=1;

void out(){
    cout<<"(";
    For(i,1,k){ cout<<a[i];if(i!=k)cout<<" ";}
    cout<<") ";
}
void Next_Division(){
    int i=k,j,R,S,D;
    while(a[i]==1 && i>0) i--;
    if(i>0){
        a[i]--;
        D = k-i+1;
        R = D/a[i]; S = D%a[i];
        k = i;
        if(R>0){
            for(int j=i+1;j<=i+R;j++){
                a[j]=a[i];
            }
            k = k+R;
        }
        if(S>0){
            k++;a[k]=S;
        }
    }
    else stop = 0;
}

void Res(){
    cin>>n;
    k=1;a[k]=n;
    while(stop==1){
        out();
        Next_Division();
    }
    stop=1;
    cout<<endl;
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}