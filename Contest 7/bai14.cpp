#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int isOperator(char x){
    if(x=='+' or x=='-' or x=='*' or x=='/') return 1;
    return 0;
}

string PostfixToPrefix(string s){
    stack<string> stk;
    for(int i = 0;i<s.length();i++){
        if(isOperator(s[i])){
            string t1 = stk.top(); stk.pop();
            string t2 = stk.top(); stk.pop();
            stk.push(s[i] + t2 + t1); 
        }
        else{
            string t = "";
            t = t + s[i];
            stk.push(t);
        }
    }
    return stk.top();
}

void Res(){
    string s;
    cin>>s;
    cout<<PostfixToPrefix(s)<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}