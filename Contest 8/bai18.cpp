#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int a[505][505],vs[505][505];
int n,m;

int bfs(){
    queue<pair<pair<int,int>,int>> q;
    For(i,1,n) For(j,1,m){
        cin>>a[i][j];
        if(a[i][j]==2) q.push({{i,j},0});
    }
    For(i,1,n) For(j,1,m){
        if(a[i][j]==1 && a[i][j+1]==0&&a[i][j-1]==0&&a[i+1][j]==0&&a[i-1][j]==0) return -1;
    }
    int ans = 0,kt=1;
    while(!q.empty()){
        int x = q.front().first.first, y = q.front().first.second, step = q.front().second;
        q.pop();
        if(vs[x][y+1]==0 && a[x][y+1]==1){
            q.push({{x,y+1},step+1});
            vs[x][y+1] = 1;
        }       
        if(vs[x][y-1]==0 && a[x][y-1]==1){
            q.push({{x,y-1},step+1});
            vs[x][y-1] = 1;
        }
        if(vs[x+1][y]==0 && a[x+1][y]==1){
            q.push({{x+1,y},step+1});
            vs[x+1][y] = 1;
        }  
        if(vs[x-1][y]==0 && a[x-1][y]==1){
            q.push({{x-1,y},step+1});
            vs[x-1][y] = 1;
        }
        ans = step;    
    }
    return ans;
}

void Res(){
    cin>>n>>m;
    memset(vs,0,sizeof(vs)); 
    memset(a,0,sizeof(a));
    cout<<bfs();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    // cin>>test;
    while(test--){
        Res();
    }
}