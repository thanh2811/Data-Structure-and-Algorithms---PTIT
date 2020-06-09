#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int f[100005];
map<string,int> mp;

int snt(int n){
    if(f[n]==0) return 1;
    return 0;
}
int toInt(string s){
    int ans = 0;
    For(i,0,s.length()-1) ans = ans*10 + (s[i]-'0');
    return ans;
}
void Sang(int n){
    f[0] = 1;
    f[1] = 1;
    For(i,2,n){
        if(f[i]==0)
            for(int j=i*2;j<=n;j+=i) f[j] = 1;
    } 
}

int bfs(queue<pair<string,int> > q,string m){
    while(!q.empty()){
        string fr = q.front().first;
        int step = q.front().second;
        // cout<<fr<<" "<<step<<"\n";
        q.pop();
        if(fr == m) return step;
        for(int i=fr.length()-1;i>=0;i--){
            string t = fr;
            for(char j='9';j>='0';j--){
                if(i==0 && j=='0') continue;
                if(fr[i] != j) t[i] = j;
                if(snt(toInt(t)) && mp[t]==0) {
                    if(t == m) return step+1;
                    q.push(make_pair(t,step+1));
                    mp[t] = 1;
                }
            }
        }
    }
}

void Res(){
    string n,m;
    cin>>n>>m;
    queue<pair<string,int> > q;
    q.push(make_pair(n,0));
    cout<<bfs(q,m)<<'\n';
    mp.clear();
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    memset(f,sizeof(f),0);
    Sang(100000);
    while(test--){
        Res();
    }
}
