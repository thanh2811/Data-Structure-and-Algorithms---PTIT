#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

/*
Let X[0..n-1] be the input sequence of length n and f(0, n-1) be the length of the longest palindromic subsequence of X[0..n-1].

If last and first characters of X are same, then f(0, n-1) = f(1, n-2) + 2.
Else f(0, n-1) = MAX (f(1, n-1), f(0, n-2)).
*/


void Res(){
    string s; 
    cin>>s;
    int n=s.length();
    int f[n+5][n+5];
    For(i,0,n-1) f[i][i]=1;
    for(int k=1;k<=n-1;k++){
        for(int i=0;i<=n-k-1;i++){
            int j=i+k;
            if(s[i]==s[j] && k==1) f[i][j]=2;
            else if(s[i]==s[j]) f[i][j] = f[i+1][j-1]+2;
            else f[i][j]=max(f[i+1][j],f[i][j-1]);
        }
    }
    cout<<f[0][n-1]<<'\n'; 
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}