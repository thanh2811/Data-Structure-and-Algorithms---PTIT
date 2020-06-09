/*
-------> Code by @thanh28 <-------
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,a,b) for(int i=a;i<=b;i++)

vector<string> s;
vector<string> ans;
int k,n,m,kt;
char a[5][5];
int HasInDictionary(string a){
    For(i,0,s.size()-1) if(a==s[i]) return 1;
    return 0;
}
int b[10][10];
string res;
void Try(int i,int j){
    if(HasInDictionary(res)) {kt=1;ans.push_back(res);}
    if(j<m&&b[i][j+1]){
        res+=a[i][j+1];
        b[i][j+1]=0;
        Try(i,j+1);
        b[i][j+1]=1;
        res.erase(res.length()-1);
    }
    if(j>1&&b[i][j-1]){
        res+=a[i][j-1];
        b[i][j-1]=0;
        Try(i,j-1);
        b[i][j-1]=1;
        res.erase(res.length()-1);
    }
    if(i<n&&b[i+1][j]){
        res+=a[i+1][j];
        b[i+1][j]=0;
        Try(i+1,j);
        b[i+1][j]=1;
       res.erase(res.length()-1);
    }
    if(i>1&&b[i-1][j]){
        res+=a[i-1][j];
        b[i-1][j]=0;
        Try(i-1,j);
        b[i-1][j]=1;
        res.erase(res.length()-1);
    }
    if(j<m&&i>1&&b[i-1][j+1]){
        res+=a[i-1][j+1];
        b[i-1][j+1]=0;
        Try(i-1,j+1);
        b[i-1][j+1]=1;
        res.erase(res.length()-1);
    }
    if(j<m&&i<n&&b[i+1][j+1]){
        res+=a[i+1][j+1];
        b[i+1][j+1]=0;
        Try(i+1,j+1);
        b[i+1][j+1]=1;
       res.erase(res.length()-1);
    }
    if(i>1&&j>1&&b[i-1][j-1]){
        res+=a[i-1][j-1];
        b[i-1][j-1]=0;
        Try(i-1,j-1);
        b[i-1][j-1]=1;
        res.erase(res.length()-1);
    }
    if(j>1&&i<n&&b[i+1][j-1]){
        res+=a[i+1][j-1];
        b[i+1][j-1]=0;
        Try(i+1,j-1);
        b[i+1][j-1]=1;
        res.erase(res.length()-1);
    }
}

void Res(){
    cin>>k>>n>>m;
    kt=0;
    for(int i=1;i<=k;i++){
        string x;
        cin>>x;
        s.push_back(x);
    }
    For(i,1,n) For(j,1,m) {cin>>a[i][j];b[i][j]=1;}
    For(i,1,n) For(j,1,m) {
        res=a[i][j];b[i][j]=0;
        Try(i,j);
        b[i][j]=1;
    }
    if(kt){                                                                              
        For(i,0,ans.size()-1) {
            cout<<ans[i]<<" ";
        }
    }
    else cout<<-1;
    cout<<'\n';
    s.clear();
    ans.clear();
}
int main(){
    IOS;
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
