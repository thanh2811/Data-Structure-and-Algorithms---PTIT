#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<string> stk;
    for(int i=0;i<s.length();i++){
        if((s[i]>='a' && s[i]<='z') or (s[i]>='A' &&s[i]<='Z')){
            string t = "";
            t = t + s[i];
            stk.push(t);
        }
        else{
            string t = "(";
            string t1 = stk.top(); stk.pop();
            // t = t + s[i];
            string t2 = stk.top(); stk.pop();
            t = t + t2 + s[i] + t1 + ")";
            stk.push(t);
        }
    }
    // for(int i = stk.top().size()-1;i>=0;i--) cout<<stk.top()[i];
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