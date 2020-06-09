#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,m,x,y;

void dfs(int u,int s,vector<int> v[],vector<int> &vs){
    vs[u] = 1;
    for(int i=0;i<v[u].size();i++) {
        if(vs[v[u][i]]==0 && v[u][i] != s){
            dfs(v[u][i],s,v,vs);
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
            dfs(i,u,v,vs);
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