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

void printSpiral(Node *root){
     stack<Node*> S1;
     stack<Node*> S2;
     S1.push(root);
     Node *temp;
     while(!S1.empty() || !S2.empty()){
         while(!S1.empty()){
             temp = S1.top();
             cout << temp->data << " ";
             S1.pop();
             if(temp->right)   S2.push(temp->right);
             if(temp->left)    S2.push(temp->left);
         }
         temp = NULL;
         while(!S2.empty()){
             temp = S2.top();
             cout << temp->data << " ";
             S2.pop();
             if(temp->left)    S1.push(temp->left);
             if(temp->right)   S1.push(temp->right);
         }
     }
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
    printSpiral(root);
    cout<<endl;
    }
}
