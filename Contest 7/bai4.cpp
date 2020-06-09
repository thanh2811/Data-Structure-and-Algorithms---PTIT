#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<char> stk;
    For(i,0,s.length()-1){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{') stk.push(s[i]);
        else{
            if(stk.empty()){
                cout<<"NO\n";return;
            }
            if(s[i]==')'){
                if(stk.top()!='('){
                    cout<<"NO\n";return;
                }
                stk.pop();
            }
            else if(s[i]==']'){
                if(stk.top()!='['){
                    cout<<"NO\n";return;
                }
                stk.pop();
            }
            else{
                if(stk.top()!='{'){
                    cout<<"NO\n";return;            
                }
                stk.pop();
            }
        }
    }
    if(stk.size()) cout<<"NO\n";
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}