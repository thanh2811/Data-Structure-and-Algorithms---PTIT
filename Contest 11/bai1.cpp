#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)
int ok;
struct node{
    char data;
    node* l;
    node* r;
};

int isOperator(char x){
    return (x=='+' || x=='-' || x=='*' || x=='/');
}
node* makeNode(char c){
    node* t = new node;
    t->data = c;
    t->l = NULL;
    t->r = NULL;
    return t;
}
void Out(node* p){
    if(p==NULL) return;
    Out(p->l);
    cout<<p->data<<" ";
    Out(p->r);
}

void built(string s){
    stack<node*> st;
    for(int i=0;i<s.length();i++){
        if(isOperator(s[i])){
            node* t1 = st.top(); st.pop();
            node* t2 = st.top(); st.pop();
            node* t = makeNode(s[i]);
            t->l = t2; t->r = t1;
            st.push(t);
        }
        else{
            node* t = makeNode(s[i]);
            st.push(t);
        }
    }
    Out(st.top());
}

// void Out(node* p){
//     if(p==NULL) return;
//     Out(p->l);
//     cout<<p->data<<" ";
//     Out(p->r);
// }

void Res(){
    string s;
    cin>>s;
    built(s);
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