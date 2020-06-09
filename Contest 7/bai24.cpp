#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

struct node{
    int data,ex;
    node* next;
};

node* Insert(node* a,int x,int y){
    node* tmp = new node;
    tmp->data = x;
    tmp->ex = y;
    tmp->next = NULL;
    a->next = tmp;
    return tmp;
}
int toInt(string s){
    int a = 0;
    For(i,0,s.length()-1){
        a = a*10 + (s[i]-'0');
    }
    return a;
}

node* Sum(node* a,node* b){
    node* tmp = new node;
    node* p = tmp;
    while(a!=NULL && b!=NULL){
        if(a->ex > b->ex) {
            p = Insert(p,a->data,a->ex);
            a = a->next;
        }
        else if(a->ex < b->ex){
            p = Insert(p,b->data,b->ex);
            b = b->next;
        }
        else{
            p = Insert(p,a->data + b->data,b->ex);
            a = a->next;
            b = b->next;
        }
    }
    while(a!=NULL){
        p = Insert(p,a->data,a->ex);
        a = a->next;
    }
    while(b!=NULL){
        p = Insert(p,b->data,b->ex);
        b = b->next;
    }
    tmp = tmp->next;
    return tmp;
}

void show(node* a){
    node* p = a;
    while(p!=NULL){
        cout<<p->data<<"*x^"<<p->ex;
        p = p->next;
        if(p!=NULL) cout<<" + ";
    }
    cout<<endl;
}

void Res(){
    string s1,s2;
    getline(cin,s1);
    node* a = new node;                      // 3*x^8 + 7*x^2 + 4*x^0
//    a = NULL;                              // 11*x^6 + 9*x^2 + 2*x^1 + 3*x^0
    node* p = a;
    int i = 0, d=0;
    int t1,t2;
    while(i<s1.length()){
        string t="";
        while(i<s1.length() && s1[i]>='0' && s1[i]<='9'){
            t = t + s1[i];
            i++;
        }
        if(t!=""){
            d++;
            if(d==1) t1 = toInt(t);
            if(d==2){
                d = 0;  
                t2 = toInt(t);
                p = Insert(p,t1,t2);
            }
        }
        i++;
    }
    a = a->next;
    getline(cin,s2);
    node* b = new node;
    node* p2 = b;
    i = 0;
    while(i<s2.length()){
        string t="";
        while(i<s2.length() && s2[i]>='0' && s2[i]<='9'){
            t = t + s2[i];
            i++;
        }
        if(t!=""){
            d++;
            if(d==1) t1 = toInt(t);
            if(d==2){
                d = 0;  
                t2 = toInt(t);
                p2 = Insert(p2,t1,t2);
            }
        }
        i++;
    }
    b = b->next;
    node* t = Sum(a,b);
    show(t);
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    cin.ignore();
    while(test--){
        Res();
    }
}