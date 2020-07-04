#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data;
    node *l;
    node *r;
};

node* Insert(node* p,int x){
    if(p==NULL){
        node* t = new node;
        t->data = x;
        t->l = NULL; t->r = NULL;
        return t;
    }
    else{
        if(x<p->data) p->l = Insert(p->l,x);
        else p->r = Insert(p->r,x);
    }
}

void Postorder(node* p){
    if(p==NULL) return;
    Postorder(p->l);
    Postorder(p->r);
    cout<<p->data<<" ";
}

void Res(){
    int n;
    cin>>n;
    node* a = NULL;
    // a = NULL;
    For(i,1,n){
        int x; cin>>x;
        a = Insert(a,x);
    }
    Postorder(a);
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