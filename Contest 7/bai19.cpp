#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    stack<int> stk;
    For(i,0,s.length()){
        if(s[i] == 'D' ) stk.push(i+1);
        else{
            cout<<i+1;
            while(!stk.empty()){
                cout<<stk.top();
                stk.pop();
            }
        }
    }
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