#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    int d = 0,ans = 0;
    vector<int> f(s.length()+5,0);
    stack<pair<char,int> > stk;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(') stk.push(make_pair(s[i],i));
        if(s[i] == ')') {
            if(!stk.empty()){
                int pos = stk.top().second;
                d = i-pos+1;
                if(pos>0) d += f[pos-1];
                stk.pop();
                f[i] = d;
                ans = max(ans,d);
            }
        }
    }
    cout<< ans <<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}