// binary search tree
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int value): data(value), left(NULL), right(NULL){}
};

Node *insert(Node *root, int value){
    if(root == NULL){
        return new Node(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
    return root;
}
void inorderTraversal(Node *root){
    if(root == NULL){
        return;
    }
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}
void preorderTraversal(Node *root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void postorderTraversal(Node *root){
    if(root == NULL){
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<" ";
}
bool search(Node *root, int value){
    if(root == NULL){
        return false;
    }
    if(root->data == value){
        return true;
    }
    if(value < root->data){
        return search(root->left, value);
    }
    else{
        return search(root->right, value);
    }
}
int main(){
    Node *root = NULL;
    int n;
    cout<<"\nEnter the number of nodes: ";
    cin>>n;
    int value;
    for(int i=0; i<n; i++){
        cout<<"\nEnter the value of node "<<i+1<<": ";
        cin>>value;
        root = insert(root, value);
    }
    cout<<"\nInorder Traversal: ";
    inorderTraversal(root);
    cout<<"\nPreorder Traversal: ";
    preorderTraversal(root);
    cout<<"\nPostorder Traversal: ";
    postorderTraversal(root);
    cout<<"\nEnter the value to be searched: ";
    cin>>value;
    if(search(root, value)){
        cout<<"\nValue found";
    }
    else{
        cout<<"\nValue not found";
    }
    return 0;
}
