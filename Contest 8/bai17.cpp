#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
char a[105][105];
int n,x1,y11,x2,y2;
int vs[105][105];

int bfs(){
    queue<pair<pair<int,int>,int> > q;
    q.push({{x1,y11},0});
    while(!q.empty()){
        int x = q.front().first.first, y = q.front().first.second, step = q.front().second;
        q.pop();
        if(x==x2&&y==y2) return step;
        for(int i=x+1;i<n;i++){
            if(a[i][y]=='X') break;
            if(i==x2 && y==y2) return step+1;
            if(vs[i][y]==0){
                q.push({{i,y},step+1});
                vs[i][y] = 1;
            }
        }
        for(int i=x-1;i>-1;i--){
            if(a[i][y]=='X') break;
            if(i==x2 && y==y2) return step+1;
            if(vs[i][y]==0){
                q.push({{i,y},step+1});
                vs[i][y] = 1;
            }
        }
        for(int i=y+1;i<n;i++){
            if(a[x][i]=='X') break;
            if(x==x2 && i==y2) return step+1;
            if(vs[x][i]==0){
                q.push({{x,i},step+1});
                vs[x][i] = 1;
            }
        }
        for(int i=y-1;i>=0;i--){
            if(a[x][i]=='X') break;
            if(x==x2 && i==y2) return step+1;
            if(vs[x][i]==0){
                q.push({{x,i},step+1});
                vs[x][i] = 1;
            }
        }
    }
}

void Res(){
    cin>>n;
    For(i,1,n) For(j,1,n) cin>>a[i-1][j-1];
    cin>>x1>>y11>>x2>>y2;
    memset(vs,0,sizeof(vs));
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