#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    stack<int> stk;
    while(cin>>s){
        if(s == "push"){
            int x;
            cin>>x;
            stk.push(x);
        }
        else if(s == "pop"){
            if(!stk.empty()) stk.pop();
        }
        else{
            if(stk.empty()){
                cout<<"empty\n";
                continue;
            }
            stack<int> tmp = stk;
            vector<int> v;
            while(!tmp.empty()){
                v.push_back(tmp.top());
                tmp.pop();
            }
            for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
int main(){
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}
