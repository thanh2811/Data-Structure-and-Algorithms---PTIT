#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int n; 

void Larger(int a[],vector<int> &b,stack<pair<int,int> > stk ){
    For(i,1,n){
        if(!stk.empty() && a[i]>stk.top().first){
            while(!stk.empty() && a[i]>stk.top().first){
                b[stk.top().second] = i;
                stk.pop();
            }
            stk.push(make_pair(a[i],i));
        }
        else stk.push(make_pair(a[i],i));
    }
}

void Smaller(int a[],vector<int> &c,stack<pair<int,int> > stk){
    For(i,1,n){
        int x = a[i];
        if(!stk.empty() && x<stk.top().first){
            while(!stk.empty() && x<stk.top().first){
                c[stk.top().second] = x;
                stk.pop();
            }
            stk.push(make_pair(x,i));
        }
        else stk.push(make_pair(x,i));
    }
}

void Res(){
    cin>>n;
    stack<pair<int,int> > stk;
    int a[n+1];
    For(i,1,n) {
        cin>>a[i];
    }
    vector<int> b(n+1,-1);
    vector<int> c(n+1,-1);
    Larger(a,b,stk);
    Smaller(a,c,stk);
    For(i,1,n) {
        if(b[i]==-1) cout<<"-1 ";
        else cout<<c[b[i]]<<" ";
    }
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