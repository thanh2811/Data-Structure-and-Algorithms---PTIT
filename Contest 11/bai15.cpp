#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data;
    node *l, *r;
    node(int val){
        data = val;
        l = r = NULL;
    }
};

int sum;

int isLeafNode(node *p){
    if(p==NULL) return 0;
    return (p->r==NULL && p->l==NULL);
}

void Sum_Right(node *p,int dir){
    if(p){
        if(isLeafNode(p) && dir) sum += p->data;
        Sum_Right(p->r,1);
        Sum_Right(p->l,0);
    }
}

void Res(){
    int n,root,x;
    char pos;
    cin>>n;
    map<int,node*> m;
    node *parent, *child;
    node* a = NULL;
    while(n--){
        cin>>root>>x>>pos;
        if(m.find(root) == m.end()){
            parent = new node(x);
            m[root] = parent;
            if(a==NULL) a = parent;
        }
        else parent = m[root];
        child = new node(x);
        if(pos=='L') parent->l = child;
        else parent->r = child;
        m[x] = child;
    }
    sum = 0;
    Sum_Right(a,0);
    cout<<sum<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}