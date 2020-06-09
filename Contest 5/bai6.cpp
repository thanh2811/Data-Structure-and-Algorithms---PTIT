#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

/*
Let X[0..n-1] be the input sequence of length n and f(0, n-1) be the length of the longest palindromic subsequence of X[0..n-1].

If last and first characters of X are same, then f(0, n-1) = f(1, n-2) + 2.
Else f(0, n-1) = MAX (f(1, n-1), f(0, n-2)).
*/

int f[1005][1005];
void Res(){
    string s; 
    cin>>s;
    int n=s.length();
    For(i,0,n-1) f[i][i]=1;
    int ans=1;
    for(int k=1;k<n;k++){
        for(int i=0;i<=n-k;i++){
            int j = i+k;
            if(s[j]!=s[i]) {
                f[i][j]=0;
                continue;
            }
            if(j-i==1) f[i][j]=1;
            else f[i][j] = f[i+1][j-1];
            if(f[i][j]==1) ans=max(ans,j-i+1);
        }
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}