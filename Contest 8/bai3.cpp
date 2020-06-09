#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    string s;
    deque<int> q;
    while(n--){
        cin >> s;
        if(s == "PUSHBACK"){
            int x; cin >> x;
            q.push_back(x);
        }
        else if(s== "PUSHFRONT"){
            int x; cin >> x;
            q.push_front(x);
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE\n";
            }
            else {
                cout << q.front() << '\n';
            }
        }
        else if( s == "PRINTBACK"){
            if(q.empty()){
                cout << "NONE\n";
            }
            else {
                cout << q.back() << '\n';
            }
        }
        else if( s == "POPFRONT"){
            if(!q.empty())
                q.pop_front();
        }
        else if( s== "POPBACK"){
            if(!q.empty())
                q.pop_back();
        }
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    while(test--){
        Res();
    }
}