#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
string s,res;
int bfs(){
    map<string,int> m;
    queue<pair<string,int>> q;
    q.push({s,0});
    while(!q.empty()){
        string t = q.front().first;
        int step = q.front().second;
        if(t == res) return step;
        q.pop();
        // cout<<t<<" ";
        string a = t;
        swap(a[0],a[1]); swap(a[0],a[4]); swap(a[0],a[3]);
        if(m[a]==0){
            if(a == res) return step+1;
            m[a] = 1;
            q.push({a,step+1});
        }
        a = t;
        swap(a[1],a[2]); swap(a[1],a[5]); swap(a[1],a[4]);
        if(m[a]==0){
            if(a == res) return step+1;
            m[a] = 1;
            q.push({a,step+1});
        }
    }
    
}

void Res(){
    char x;
    For(i,1,6) {
        cin>>x; 
        s = s + x;
    }
    For(i,1,6) {
        cin>>x; 
        res = res + x;
    }
    cout<<bfs()<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}