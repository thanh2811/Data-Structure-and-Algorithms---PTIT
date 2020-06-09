#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    int x;
    queue<int> q;
    while(n--){
        cin>>x;
        switch (x){
            case 1:
                cout<<q.size()<<endl;
                break;
            case 2:
                if(q.empty()) cout<<"YES\n";
                else cout<<"NO\n";
                break;
            case 3:
                int k; cin>>k;
                q.push(k);
                break;
            case 4:
                if(!q.empty()) q.pop();
                break;
            case 5:
                if(q.empty()) cout<<"-1\n";
                else cout<<q.front()<<endl;
                break;
            default:
                if(q.empty()) cout<<"-1\n";
                else{
                    int t;
                    queue<int> qq = q;
                    while(!qq.empty()){
                        t = qq.front();
                        qq.pop();
                    }
                    cout<<t<<endl;
                }
                break;
        }
    }
}
int main(){
    // ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}