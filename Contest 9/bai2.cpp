#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,x,y;
    cin>>n;
    int a[100][100] = {0};
    // memset(a,0,sizeof(a));
    int k = 1;
    string s;
    istringstream ss(s);
    while(k<=n){
        cin.ignore();
        getline(cin,s);
        int i = 0;
        while(i<s.length()){
            int t = 0;
            while(i<s.length() && s[i]<='9' && s[i]>='0'){
                t = t*10 + (s[i]-'0');
                i++;
            }
            if(t){
                a[k][t] = 1; a[t][k] = 1;
            }
            i++;
        }
        k++;
    }
    For(i,1,n){
        For(j,i+1,n) if(a[i][j]) cout<<i<<" "<<j<<"\n";
        // cout<<'\n';
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    while(test--){
        Res();
    }
}