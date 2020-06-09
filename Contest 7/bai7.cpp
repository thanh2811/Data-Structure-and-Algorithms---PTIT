#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    int d = 0;
    stack<char> stk;
    For(i,0,s.length()-1){
        if(s[i] == '(') stk.push('(');
        else{
            if(!stk.empty()) stk.pop();
            else d++;
        }
    }
    cout<< d/2 + stk.size()/2 + d%2 + stk.size()%2 <<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}