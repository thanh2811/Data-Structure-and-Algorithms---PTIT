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
int isLeafNode(node* p){
    if(p==NULL) return 0;
    return (p->l==NULL && p->r==NULL);
}

int sum;

void Sum_Left(node* p, int dir){
    if(p){
        if(isLeafNode(p) && dir) sum += p->data;
        Sum_Left(p->l,0);
        Sum_Left(p->r,1);
    }
}

void Res(){
    int n,root,x;
    char pos;
    cin>>n;
    node *a = NULL;
    map<int,node*> m;
    while(n--){
        cin>>root>>x>>pos;
        node *parent;
        if(m.find(root) == m.end()){
            parent = new node(root);
            m[root] = parent;
            if(a == NULL) a = parent;
        }
        else parent = m[root];
        node *child = new node(x);
        if(pos=='L') parent->l = child;
        else parent->r = child;
        m[x] = child;
    }
    sum = 0;
    Sum_Left(a,0);
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