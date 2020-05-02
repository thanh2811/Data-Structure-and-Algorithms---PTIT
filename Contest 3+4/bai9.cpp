/*
Link: https://www.spoj.com/ACMIT/problems/ITTT203A/
*/

#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
struct data{
    int id,a,b;
};
bool cmp(data x,data y){
    return x.b>y.b;
}
void Res(){
    int n;
    cin>>n;
    data da[n+1];
    for(int i=1;i<=n;i++) cin>>da[i].id>>da[i].a>>da[i].b;
    sort(da+1,da+n+1,cmp);
    int s=0,d=0;
    vector<int> b(1005,0);
    for(int i=1;i<=n;i++){
        int j=da[i].a;
        while(b[j]&&j>1) j--;
        if(b[j]==0){
            d++;
            s+=da[i].b;
            b[j]=1;
        }

    }
    cout<<d<<" "<<s<<'\n';
}
int main(){
    IOS;
    int test;
    cin>>test;
    while(test--){
        Res();
    }
}