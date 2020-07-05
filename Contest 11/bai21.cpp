#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data;
    node *l;
    node *r;
    node(int x){
        data = x;
        l = r = NULL;
    }
};

void Insert(node* &p,int x){
    if(p==NULL) p = new node(x);
    else{
        if(x<p->data) Insert(p->l,x);
        else Insert(p->r,x);
    }
}

int isLeafNode(node *p){
    if(p==NULL) return 0;
    return (p->l==NULL && p->r==NULL);
}

void PrintLeafNode(node *p){
    if(p==NULL) return;
    if(isLeafNode(p)) cout<<p->data<<" ";
    PrintLeafNode(p->l);
    PrintLeafNode(p->r);
}

void Res(){
    int n;
    cin>>n;
    node* a = NULL;
    For(i,1,n){
        int x; cin>>x;
        Insert(a,x);
    }
    PrintLeafNode(a);
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