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
            else p->r = new node(x);
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

void Show(node *p){
    queue<node* > q;
    stack<int> temp;
    q.push(p);
    while(!q.empty()){
        node *t = q.front();
        q.pop();
        temp.push(t->data);        
        if(t->r) q.push(t->r);
        if(t->l) q.push(t->l);
    }
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
}

void Res(){
    int n;
    cin>>n;
    node *a = NULL;
    while(n--){
        int root,x;
        char pos;
        cin>>root>>x>>pos;
        if(a==NULL) {
            a = new node(root);
            Insert(a,root,x,pos);
        }
        else Insert(a,root,x,pos);
    }
    Show(a);
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
