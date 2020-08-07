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
    return(1+max(height(root->left), height(root->right)));
}

int sum(Node *root){
    if(root==NULL)  return 0;
    else{
        int left_sum=sum(root->left);
        int right_sum=sum(root->right);
        int sum_total=root->data + left_sum+right_sum;
    }
}

bool isSumTree(Node* root){
     if(root==NULL) return 1;
     if(root->left==NULL && root->right==NULL) return 1;
     int left_tree=sum(root->left);
     int right_tree=sum(root->right);
     if(root->data==(left_tree+right_tree) && isSumTree(root->left) && isSumTree(root->right))
        return 1;
     return 0;
}

main(){
  int t,n,n1,n2; char lr;
  cin>>t;
  while (t--){
     map<int, Node*> m;
     cin>>n;
     Node *root = NULL;
     Node *child;
     while (n--){
        Node *parent;
        cin>>n1>>n2>>lr;
        if (m.find(n1) == m.end()){
           parent = new Node(n1);
           m[n1] = parent;
           if (root == NULL) root = parent;
        }
        else parent = m[n1];
        child = new Node(n2);
        if (lr == 'L')  parent->left = child;
        else            parent->right = child;
        m[n2]  = child;
     }
    cout << isSumTree(root) << endl;
    }
}
