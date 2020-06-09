#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
map<int,int> m;

int bfs(int n,queue<pair<int,int> > &q){
    while(!q.empty()){
        int t = q.front().first, step = q.front().second;
        // cout<<t<<" "<<step<<endl;
        q.pop();
        if(t == 1) return step;
        else{
            for(int i=2;i<sqrt(t);i++){
                if(t%i==0) {
                    if(t/i==1) return step+1;
                    if(m[t/i]==0 && t/i>1){
                        if(t/i==2) return step+2;
                        q.push({t/i,1+step});
                        m[t/i] = 1;
                    }
                }
            }
            int x=sqrt(t);
            if(x*x==t && m[x]==0) {
                if(x==1) return step+1;
                if(x==2) return step+2;
                q.push({x,1+step});
                m[x] = 1;
            }
            if(m[t-1]==0){ 
                if(t==2) return step+1;
                if(t-1==2) return step+2;
                q.push({t-1,1+step});
                m[t-1] = 1;
            }
        }
    }
}

void Res(){
    int n;
    cin>>n;
    queue<pair<int,int> > q;
    q.push({n,0});
    m[n] = 1;
    cout<<bfs(n,q)<<endl;
    m.clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}