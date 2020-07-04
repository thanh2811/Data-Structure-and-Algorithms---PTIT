#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data,ok;
    node *l, *r;
    node(int value){
        ok = 0;
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
            if(p->l && p->r) p->ok = 1;
        }
        else{
            Insert(p->l,root,x,pos);
            Insert(p->r,root,x,pos);
        }
    }
}

int isLeafNode(node* p){
    if(p->l==NULL && p->r==NULL) return 1;
    return 0;
}

int end_check = 1;

void Two_Childs(node* p,int k){
    if(end_check==0) return;
    if(p==NULL) return;
    if(p->ok == 0 && k>0 && !isLeafNode(p)) end_check = 0;
    else{
        Two_Childs(p->l,k+1);
        Two_Childs(p->r,k+1);
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
    end_check = 1;
    Two_Childs(a,0);
    cout<<((end_check)?"1\n" : "0\n");
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}