#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)
 
void Res(){
    int a[10] = { 1, 2, 5,10, 20, 50, 100, 200, 500, 1000};
    int n = 10;
    int s;
    cin>>s;
    int ans = 0;
    for(int i=n-1;i>=0;i--){
        int x = s/a[i];
        s-=x*a[i];
        ans += x;
        if(s==0) break;
    }
    cout<<ans<<'\n';
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
} 
