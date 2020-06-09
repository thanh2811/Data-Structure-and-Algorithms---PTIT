#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int a[205];
string s;
map<string,int> m;
vector<string> v;
void out(int n,vector<pair<int,int>> &p){
    string t = s;
    For(i,0,n-1){
        if(a[i]){
            t[p[i].first] = '.';
            t[p[i].second] = '.';
        }
    }
    if(t!=s){
        string ans;
        For(i,0,s.length()-1){
            if(s[i]==t[i]) ans = ans + s[i];
        }
        if(m[ans]==0){
            m[ans]=1;
            v.push_back(ans);
        }
    }
}

void Try(int n,int i,vector<pair<int,int>> &p){
    For(j,0,1){
        a[i] = j;
        if(i==n-1) out(n,p);
        else Try(n,i+1,p);
    }
}

void Res(){
    getline(cin,s);
    stack<int> stk;
    vector<pair<int,int> > p;
    For(i,0,s.length()-1){
        if(s[i]=='(') stk.push(i);
        else if(s[i]==')'){
            p.push_back(make_pair(stk.top(),i));
            stk.pop();
        }
    }
    memset(a,204,0);
    reverse(p.begin(),p.end());
    // For(i,0,p.size()-1) cout<<p[i].first<<" "<<p[i].second<<endl;
    Try(p.size(),0,p);
    sort(v.begin(),v.end());
    For(i,0,v.size()-1) cout<<v[i]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}