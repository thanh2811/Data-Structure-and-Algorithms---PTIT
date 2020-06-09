#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

bool cmp(string s,string x){
    int n = s.length();
    int m = x.length();
    if(n == m) return (s < x);
    return (n < m);
}
vector<string> ans;
int n;
void Res(){
    cin>>n;
    if(n==1){cout<<"44 ";return;}
    if(n==2){cout<<"44 55 ";return;}
    queue<string> q;
    q.push("44");
    q.push("55");
    int i=2,k=n;
    ans.push_back("44"); ans.push_back("55");
    while(1){
        vector<string> v;
        while(!q.empty()){
            v.push_back(q.front());
            q.pop();   
        }
        For(j,0,v.size()-1){
            q.push("4"+v[j]+"4");
            ans.push_back("4"+v[j]+"4");
            i++;
            if(i==n) return;
        }
        For(j,0,v.size()-1){
            q.push("5"+v[j]+"5");
            ans.push_back("5"+v[j]+"5");
            i++;
            if(i==n) return;
        }
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}