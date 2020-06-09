#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,d=0;
    cin>>n;
    pair<int,int> a[n+5];
    For(i,1,n) {
        cin>>a[i].first;
        a[i].second = i;
    }
    vector<int> vs(n+1,0);
    sort(a+1,a+1+n);
    For(i,1,n){
        if(vs[i] || a[i].second == i) continue;
        int j=i,t=0;
        while(vs[j]==0){
            vs[j] = 1;
            j = a[j].second;
            t++;
        }
        d += t-1;
    }
    cout<<d<<endl;
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}