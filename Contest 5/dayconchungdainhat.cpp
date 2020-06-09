#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string a,b;
    cin>>a>>b;
    a = ' ' + a;
    b = ' ' + b;
    int f[100][100]={0};
    for(int i=0;i<=a.length();i++){
        for(int j=0;j<=b.length();j++){
            if(i==0||j==0) f[i][j]=0;
            else{
                if(a[i]==b[j]) f[i][j]=f[i-1][j-1]+1;
                else f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    cout<<f[a.length()-1][b.length()-1];
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int Number_of_Testcase = 1;
    cin>>Number_of_Testcase;
    while(Number_of_Testcase--){
        Res();
    }
}