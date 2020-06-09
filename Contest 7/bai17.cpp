#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<int> stk;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='0' and s[i]<='9'){
            stk.push(s[i]-'0');
        }
        else{
            int a = stk.top(); stk.pop();
            int b = stk.top(); stk.pop();
            if(s[i] == '*') stk.push(a*b);
            if(s[i] == '/') stk.push(a/b);
            if(s[i] == '+') stk.push(a+b);
            if(s[i] == '-') stk.push(a-b);
        }
    }
    cout<<stk.top()<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}