#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    int n,s,m;
    cin>>n>>s>>m;
    int need = s*m;
    if(need>(s-s/7)*n) cout<<-1;
    else{
        s = s-s/7;
        for(int i=1;i<=s;i++){
            int t=n*i;
            if(t>=need){
                cout<<i;
                break;
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