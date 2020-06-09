#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int ex(int n,int k){
    if(k==0) return 1;
    int s = ex(n,k/2);
    if(k&1) return s*s*n;
    else return s*s;
}

int convert_to_10(int k,string s){
    int t=0;
    for(int i=s.length()-1;i>=0;i--){
        t += (s[i]-'0')*ex(k,i-(s.length()-1));
    }
    return t;
}
string devide(int n,int k){
    string s;
    while(n){
        s+=(n%k)+'0';
        n/=k;
    }
    reverse(s.begin(),s.end());
    return s;
}

void Res(){
    int k;
    string n,m;
    cin>>k>>n>>m;
    int x = convert_to_10(k,n)+convert_to_10(k,m);
    cout<<devide(x,k);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}