#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

void printPostOrderBST(Node *root) {
    if (!root) return;
    stack<Node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        Node* cur = s1.top();
        s1.pop();
        s2.push(cur);

        if (cur->left) s1.push(cur->left);
        if (cur->right) s1.push(cur->right);
    }

    while (!s2.empty()) {
        Node* cur = s2.top();
        s2.pop();
        cout << cur->data << " ";
    }
}

Node* buildPreOrderBST(int *A, int n){
    if (n <= 0) return NULL;
    Node* root = new Node;
    root->data = A[0];
    int i = 0;
    for (i = 1; i < n; i++)
        if (A[i] > A[0]) break;
    root->left =  buildPreOrderBST(&A[1], i-1);
    root->right = buildPreOrderBST(&A[i], n-i);
}

bool verifyPreOrderBST(int *A, int n){
    if (n <= 0) return true;
    int i = 0, j;
    for (i = 1; i < n; i++)
        if (A[i] > A[0]) break;
    for (j = 1; j < i; j++) {
        if (A[0] <= A[j]) {
            cout << "NO";
            return false;
        }
    }
    for (j = i; j < n; j++) {
        if (A[0] >= A[j]) {
            cout << "NO";
            return false;
        }
    }
    return (true && verifyPreOrderBST(&A[1], i-1) && verifyPreOrderBST(&A[i], n-i));
}

void preOrderToPostOrderBST(int *A, int n){
    if (!verifyPreOrderBST(A, n)) return;
    Node *root = buildPreOrderBST(A, n);
    printPostOrderBST(root);
}

main(){
    int A[1005], t, n, i;
    cin >> t;
    while (t--){
        cin >> n;
        for (i=0; i<n; i++) cin >> A[i];
        preOrderToPostOrderBST(A, n);
        cout << endl;
    }
}
