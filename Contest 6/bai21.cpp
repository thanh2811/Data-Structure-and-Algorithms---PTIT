#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef pair<int,int> pii;

bool cmp(pii a,pii b){
    if(a.first == b.first) return a.second<b.second;
    return a.first>b.first;
}

void Res(){
    int n,k;
    cin>>n;
    int a[n+5];
    map<int,int> m;
    For(i,1,n){
        cin>>a[i];
        m[a[i]]++;
    }
    vector<pii> b;
    For(i,1,n){
        if(m[a[i]]) {
            b.push_back(make_pair(m[a[i]],a[i])); 
            m[a[i]] = 0;
        }
    }
    sort(b.begin(),b.end(),cmp);
    For(i,0,b.size()-1) For(j,1,b[i].first) cout<<b[i].second<<" ";
    cout<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}