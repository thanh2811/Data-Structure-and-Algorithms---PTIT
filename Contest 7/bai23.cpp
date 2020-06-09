#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<string> stk;
    int i = 0;
    while(i<s.length()){
        string tmp = "";
        tmp = tmp + s[i];
        if(s[i]==']'){
            string t = "";
            while(!stk.empty() && stk.top()!="["){
                t = stk.top() + t;
                stk.pop();
            }
            if(!stk.empty()) stk.pop();
            string num = "";
            while(!stk.empty()){
                string a = stk.top();
                if(a[0]<'0' || a[0]>'9') break;
                num = a + num;
                stk.pop();
            }
            int f=0;
            if(num != ""){
                For(j,0,num.length()-1) f = f*10 + (num[j]-'0');
            }
            string p = "";
            For(j,1,f) p = t + p;
            if(f) stk.push(p);
            else stk.push(t);
        }
        else stk.push(tmp);
        i++;
    }
    vector<string> a;
    while(!stk.empty()){
        a.push_back(stk.top());
        stk.pop();
    }
    for(int i=a.size()-1;i>=0;i--) cout<<a[i];
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