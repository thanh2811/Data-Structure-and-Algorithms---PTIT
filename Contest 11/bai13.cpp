#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data;
    node *l, *r;
    node(int value){
        data = value;
        l = r = NULL;
    }
};

void Insert(node *p,int root, int x, char pos){
    if(p==NULL){
        return;
    }
    else{
        if(p->data == root){
            if(pos == 'L' && p->l==NULL) p->l = new node(x);
            else if(pos == 'R' && p->r==NULL) p->r = new node(x);
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

int ok = 1;

void check(node* p, node* k){
    if(p && k){
        if(ok==0) return;
        if((p==NULL && k) || (p && k==NULL)) ok = 0;
        else if(p->data != k->data) ok = 0;
        else {
            check(p->l,k->l);
            check(p->r,k->r);
        }
    }
}

void Res(){
    int n,root,x;
    char pos;
    cin>>n;
    int m = n;
    node *a = NULL;
    node *b = NULL;
    For(i,1,n){
        cin>>root>>x>>pos;
        if(a==NULL) {
            a = new node(root);
            Insert(a,root,x,pos);
        }
        else Insert(a,root,x,pos);
    }
    cin>>n;
    For(i,1,n) {
        cin>>root>>x>>pos;
        if(b==NULL) {
            b = new node(root);
            Insert(b,root,x,pos);
        }
        else Insert(b,root,x,pos);
    }
    ok = 1;
    check(a,b);
    cout<<(ok? "1\n" : "0\n");
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}