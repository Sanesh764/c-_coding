#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=nullptr;
        this->right=nullptr;
    }
};

int sum(Node* root){
    if(root==nullptr) return 0;
    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    return leftSum+rightSum+root->val;
}
int product(Node* root){
    if(root==nullptr) return 1;
    int leftSum=product(root->left);
    int rightSum=product(root->right);
    return leftSum*rightSum*root->val;

}
int size(Node* root){
    if(root==nullptr) return 0;
    return 1+size(root->left)+size(root->right);
}
int level(Node* root){
    if(root==nullptr) return 0;
    return 1+max(level(root->left),level(root->right));
}
int main() {
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<sum(a)<<" ";
    cout<<size(a)<<" ";
    cout<<product(a)<<" ";
    cout<<level(a)<<" ";
    return 0;
}