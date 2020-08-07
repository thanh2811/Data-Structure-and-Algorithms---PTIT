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

int maxSum(Node* root, int &res){
    if(!root)   return 0;
    if(!root->left && !root->right) return root->data;
    int ls = maxSum(root->left, res);
    int rs = maxSum(root->right, res);
    if(root->left && root->right){
        res = max(res, ls + rs + root->data);
        return max(ls, rs) + root->data;
    }
    return (!root->left)? rs + root->data : ls + root->data;
}

int maxPathSum(struct Node *root){
    int res = INT_MIN;
    maxSum(root, res);
    return res;
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
    cout<<maxPathSum(root)<<endl;
    }
}
