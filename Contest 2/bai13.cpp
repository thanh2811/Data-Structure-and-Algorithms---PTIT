/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,stop=0;
char a[20];
int k;

int kt(){
    int i=1,tmp=0;
    while(i<=n){
        if(a[i]=='A'){
            int j=i+1;
            while(a[j]=='A') j++;
            if(j-i>k) return 0;
            if(j-i==k && tmp==0) tmp=1;
            else if(j-i==k &&tmp==1) return 0;
            i=j;
        }
        else i++;
    }
    if(tmp==1) return 1;
    return 0;
}
int ans = 0;
void dem(){
    if(kt()){
        ans++;
    }
}
void out(){
    if(kt()){
        For(i,1,n) cout<<a[i];
        cout<<"\n";
    }
}
void sinh(){
    int i=n;
    while(i>0&&a[i]=='B') {a[i]='A';i--;}
    if(i==0) stop=1;
    else{
        a[i]='B';
    }
}
void Res(){
    cin>>n>>k;
    For(i,1,n) a[i]='A';
    while(!stop){
        dem();
        sinh();
    }
    cout<<ans<<endl;
    For(i,1,n) a[i]='A';
    stop=0;
    while(!stop){
        out();
        sinh();
    }
    // stop=0;
    // cout<<endl;
}
int main(){
    // IOS;
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}