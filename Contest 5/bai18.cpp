#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int f[n+10];
    f[0]=0;f[1]=1;
    int t=v[0].second;
    for(int i=2;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(v[i-1].first>v[j-1].second) f[i]=max(f[i],f[j]+1);
        }
    }
    cout<<f[n]<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}