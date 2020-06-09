#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
typedef pair<int,int> pii;

struct sx
{
    int f,s;
};
void Res(){
    int n,x;
    cin>>n>>x;
    sx v[n+5];
    For(i,1,n){
        cin>>v[i].f;
        v[i].s = abs(v[i].f-x);
    }
    for(int i=2;i<=n;i++){
        int j=i-1, tmp1 = v[i].f, tmp2 = v[i].s;
        while(tmp2<v[j].s && j>=1){
            v[j+1] = v[j];
            j--;
        }
        v[j+1].f = tmp1;
        v[j+1].s = tmp2;
    }
    For(i,1,n) cout<<v[i].f<<" ";
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