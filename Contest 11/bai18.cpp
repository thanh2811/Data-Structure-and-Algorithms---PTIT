#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data;
    node *l, *r;
    node(int x){
        data = x;
        l = r = NULL;
    }
};

void Insert(node *&p,int x){
    if(p==NULL) p = new node(x);
    else{
        if(p->data > x)  Insert(p->l,x);
        else if(p->data < x) Insert(p->r,x);
    }
}

void PreOrder(node *p){
    if(p){
        cout<<p->data<<" ";
        PreOrder(p->l);
        PreOrder(p->r);
    }
}

void Res(){
    int n,x;
    cin>>n;
    node *a = NULL;
    map<int,int> m;
    For(i,1,n){
        cin>>x;
        Insert(a,x);
    }
    PreOrder(a);
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