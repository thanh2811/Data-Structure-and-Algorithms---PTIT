#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


int height(struct Node *root){
    if(!root) return 0;
    return(1+max(height(root->left),height(root->right)));
}

bool check(Node *root,int level,int h){
    if(!root) return true;
    if(!root->left && !root->right && level<h) return false;
    return check(root->left,level+1,h) && check(root->right,level+1,h);
}

bool test(Node *root){
   int h=height(root);
   return check(root,1,h);
}

void makeNode(Node *root,int n1,int n2,char c){
    switch(c){
        case 'L': root->left=new Node(n2);
                break;
        case 'R': root->right=new Node(n2);
                break;
    }
}

void insert(Node *root,int n1,int n2,char c){
     if(root==NULL) return;
     if(root->data == n1)
         makeNode(root,n1,n2,c);
     else{
         insert(root->left,n1,n2,c);
         insert(root->right,n1,n2,c);
     }
 }

main(){
  int t,n;
  cin>>t;
  while(t--) {
    cin>>n;
    Node *root=NULL;
    while(n--){
        int n1,n2; char c;
        cin>>n1>>n2>>c;
        if(root==NULL){
            root=new Node(n1);
            makeNode(root,n1,n2,c);
        }
        else insert(root,n1,n2,c);
    }
    cout << test(root) << endl;
    }
}
