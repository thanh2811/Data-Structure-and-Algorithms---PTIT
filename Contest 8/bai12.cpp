#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n;
string s,res;
map<string,int> m1,m2;

int bfs(){
    queue<pair<string,int>> q;
    q.push({s,0});
    m2[s] = 1;
    while(!q.empty()){
        string t = q.front().first;
        int step = q.front().second;
        q.pop();
        cout<<t<<endl;
        if(t==res) return step;
        for(int i=0;i<t.length();i++){
            string tmp = t;
            for(char j='A';j<='Z';j++){
                // if(t[i]==j) continue;
                tmp[i]=j;
                if(m1[tmp] && m2[tmp]==0){
                    m2[tmp] = 1;
                    if(tmp==res) return step+1;
                    q.push({tmp,step+1});
                }
            }
        }
    }
    return -2;
}

void Res(){
    cin>>n;
    string x;
    cin>>s>>res;
    For(i,1,n){
        cin>>x;
        m1[x] = 1;
    }
    cout<<bfs()+1<<'\n';
    m1.clear(); m2.clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}