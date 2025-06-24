#include<iostream>
using namespace std;
class Node{
public:
    char val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};
// Preorder Traversal (Root -> Left -> Right)
void Preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}
// Postorder Traversal (Left -> Right -> Root)
void Postorder(Node* root){
    if(root==nullptr) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->val<<" ";
}
// Inorder Traversal (Left -> Root -> Right)
void Inorder(Node* root){
    if(root==nullptr) return;
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}
void conversepreorder(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    conversepreorder(root->right);
    conversepreorder(root->left);
}
void conversePostorder(Node* root){
    if(root==nullptr) return;
    conversePostorder(root->right);
    conversePostorder(root->left);
    cout<<root->val<<" ";
}
void converseInorder(Node* root){
    if(root==nullptr) return;
    converseInorder(root->right);
    cout<<root->val<<" ";
    converseInorder(root->left);
}
int main() {
    Node* a=new Node('a');
    Node* b=new Node('b');
    Node* c=new Node('c');
    Node* d=new Node('d');
    Node* e=new Node('e');
    Node* f=new Node('f');
    Node* g=new Node('g');
    Node* h=new Node('h');

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->left=h;
    cout<<"the preorder of given binary tree is :";
    Preorder(a);
    cout<<endl;
    cout<<"the postorder of given binary tree is :";
    Postorder(a);
    cout<<endl;
    cout<<"the inorder of given binary tree is :";
    Inorder(a);
    cout<<endl;
    cout<<"the conversepreorder of given binary tree is :";
    conversepreorder(a);
    cout<<endl;
    cout<<"the conversePostorder of given binary tree is :";
    conversePostorder(a);
    cout<<"the converseInorder of given binary tree is :";
    converseInorder(a);
    return 0;
}