#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    getline(cin,s);
    stack<char> stk;
    for(int i=0;i<=s.length();i++){
        if(s[i] == ' ' || s[i]=='\0'){
            // if(!stk.empty()){
                while(!stk.empty()){
                    cout<<stk.top();
                    stk.pop();
                }
                cout<<" ";
            // }
        }
        else  stk.push(s[i]);
    }
    cout<<endl;
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