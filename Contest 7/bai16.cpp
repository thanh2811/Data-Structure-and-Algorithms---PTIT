#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<int> stk;
    For(i,0,s.length()-1){
        if(s[i]>='0' && s[i]<='9') stk.push(s[i]-'0');
        else{
            int a = stk.top(); stk.pop();
            int b = stk.top(); stk.pop();
            if(s[i] == '*') stk.push(a*b);
            if(s[i] == '/') stk.push(b/a);
            if(s[i] == '+') stk.push(a+b);
            if(s[i] == '-') stk.push(b-a);
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