#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

vector<int> v[100005];
int vs[100005];
int n,m,ok;

int isPerfect(vector<int> fr){
    int k = fr.size();
    for(int i=0;i<k;i++){
        if(v[fr[i]].size() != k-1) return 0;
    }
    return 1;
}

void dfs(int u,vector<int> &fr){
    vs[u] = 1;
    fr.push_back(u);
    for(int i=0;i<v[u].size();i++){
        int x = v[u][i];
        if(vs[x]==0) dfs(x,fr);
    }    
}

void Res(){
    memset(vs,0,sizeof(vs));
    cin>>n>>m;
    For(i,1,n) v[i].clear();
    For(i,1,m){
        int x,y; cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    For(i,1,n){
        if(vs[i]==0){
            vector<int> fr;
            dfs(i,fr);
            // cout<<fr.size()<<" ";
            if(isPerfect(fr)==0){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}