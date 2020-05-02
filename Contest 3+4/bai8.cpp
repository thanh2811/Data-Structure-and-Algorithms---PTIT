#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
struct data{
    int a,b;
};
bool cmp(data x,data y){
    return x.b<y.b;
}
void Res(){
    int n;
    cin>>n;
    data da[n+1];
    for(int i=1;i<=n;i++) cin>>da[i].a;
    for(int i=1;i<=n;i++) cin>>da[i].b;
    sort(da+1,da+n+1,cmp);
    int ans=1,tmp=da[1].b;
    for(int i=2;i<=n;i++){
        if(da[i].a>=tmp){
            tmp=da[i].b;
            ans++;
        }
    }
    cout<<ans<<'\n';
}
int main(){
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}