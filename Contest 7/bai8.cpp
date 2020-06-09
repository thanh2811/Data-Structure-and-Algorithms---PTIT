#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<char> stk;
    for(int i=0;i<s.length();i++){
        if(s[i]==')'){
            stack<char> tmp;
            while(!stk.empty() && stk.top()!='('){
                tmp.push(stk.top());
                stk.pop();
            }

            if(!stk.empty()) stk.pop();

            if(!stk.empty()){
                if(stk.top()=='-'){     //    -(
                    if(!tmp.empty() && tmp.top()=='-') stk.pop();
                    while(!tmp.empty()){
                        if(tmp.top()=='+') stk.push('-');
                        else if(tmp.top()=='-') stk.push('+');
                        else stk.push(tmp.top());
                        tmp.pop();
                    }
                }
                else{                   //    +(
                    while(!tmp.empty()){
                        stk.push(tmp.top());
                        tmp.pop();
                    }
                }
            }
            else{                       //     s = (a+b)
                while(!tmp.empty()){
                    stk.push(tmp.top());
                    tmp.pop();
                }
            }
        }
        else stk.push(s[i]);
    }
    string ans = "";
    while(!stk.empty()){
        ans = ans + stk.top();
        stk.pop();
    }
    // if(ans[ans.length()-1] != '+') cout<<ans[ans.length()-1];
    for(int i=ans.length()-1;i>=0;i--) cout<<ans[i];
    // if(ans[ans.length()-1] != '+') cout<<ans[ans.length()-1];
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}