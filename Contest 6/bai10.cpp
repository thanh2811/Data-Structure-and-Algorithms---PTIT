#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    int n;
    cin>>n;
    int f[12]={0};
    For(i,1,n){
        cin>>s;
        For(j,0,s.length()-1) f[s[j]-'0']++;
    }
    For(i,0,9) if(f[i]) cout<<i<<" ";
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