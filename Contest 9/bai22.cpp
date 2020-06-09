#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int n,m,x,y;

void bfs(int u,int d1,int d2,vector<int> v[],vector<int> &vs){
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()){
        int t = q.front(); q.pop();
        for(int i=0;i<v[t].size();i++) {
            if((d1==t && v[t][i]==d2) || (d2==t && v[t][i]==d1)) continue;
            if(vs[v[t][i]]==0){
                vs[v[t][i]] = 1;
                q.push(v[t][i]);
            }
        }
    }
}

int Canh_Cau(int d1,int d2,vector<int> v[]){
    vector<int> vs(n+5,0);
    int d = 0;
    For(i,1,n){
        if(vs[i]==0){
            d++;
            if(d==2) return 1;
            bfs(i,d1,d2,v,vs);
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
        for(int j=0;j<v[i].size();j++){
            if(i<v[i][j] && Canh_Cau(i,v[i][j],v) ){ 
                cout<<i<<" "<<v[i][j]<<" ";
            }
        }
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