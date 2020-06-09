#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,m,x,y;

void bfs(int u,int s,vector<int> v[],vector<int> &vs){
    queue<int> q;
    q.push(u);
    while (!q.empty()){
        int t = q.front();
        q.pop();
        vs[t] = 1;
        for(int i=0;i<v[t].size();i++){
            if(vs[v[t][i]]==0 && v[t][i]!=s){
                vs[v[t][i]] = 1;
                q.push(v[t][i]);
            }
        }
    }
    
}

int Dinh_Tru(int u,vector<int> v[]){
    vector<int> vs(n+5,0);
    int d = 0;
    For(i,1,n){
        if(i==u) continue;
        if(vs[i]==0){
            d++;
            if(d==2) return 1;
            bfs(i,u,v,vs);
        }        
    }
    return 0;
}

void Res(){
    cin>>n>>m;
    vector<int> v[10005];
    For(i,1,m){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        if(Dinh_Tru(i,v)) cout<<i<<" ";
    }
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
        
    }
}