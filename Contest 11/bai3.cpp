#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;
#define For(i,a,b) for(int i=a;i<=b;i++)

int search(int in[],int x,int n){
    For(i,1,n) if(in[i-1]==x) return i-1;
    return -1;
}

void printPostorder(int in[],int pre[],int n){
    int root = search(in,pre[0],n);
    // if(root==-1) return;
    if(root != 0){  // find left tree
        printPostorder(in,pre+1,root);
    }
    if(root != n-1){ // find right tree
        printPostorder(in + root + 1, pre + root + 1, n-root-1); // vì cây con trái có root - 1 node 
    }
    cout<< pre[0] <<" ";
}

void Res(){
    int n;
    cin>>n;
    int in[n+1],pre[n+1];
    For(i,1,n) cin>>in[i-1];
    For(i,1,n) cin>>pre[i-1];
    printPostorder(in,pre,n);
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