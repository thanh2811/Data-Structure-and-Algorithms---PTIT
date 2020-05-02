
#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

void Res(){
    string s;
    cin>>s;
    int n=s.length();
    int d1=0,d2=0;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='[') d1++;
        else d2++;
        if(d1<d2){
            for(int j=i+1;j<n;j++){
                if(s[j]=='['){
                    swap(s[i],s[j]);
                    ans+=j-i;
                    d1++;
                    d2--;
                    break;
                }
            }
        }
    }
    cout<<ans<<'\n';

}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}