#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    getline(cin,s);
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i] == ')'){
            int kt = 1;
            if(!stk.empty()){
                char x = stk.top();
                while(x != '('){
                    if(x == '*' or x == '+' or x == '-' or x == '/') kt = 0;
                    stk.pop();
                    x = stk.top();
                }
                stk.pop();
            }
            if(kt){
                cout<<"Yes\n";return;
            }
            
        }
        else stk.push(s[i]);
    }
    cout<<"No\n";   
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    cin.ignore();
    while(test--){
        Res();
    }
}