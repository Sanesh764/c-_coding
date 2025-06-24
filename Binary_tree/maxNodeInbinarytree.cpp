#include<iostream>
#include<climits>

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
void diplayTree(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    diplayTree(root->left);
    diplayTree(root->right);
}
int MaxTree(Node* root){
    if(root==nullptr) return INT_MIN;
    int lMax=MaxTree(root->left);
    int rMax=MaxTree(root->right);
    return max(root->val,max(lMax,rMax));
}
int main() {
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(30);
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
    diplayTree(a);
    cout<<endl;
    cout<<MaxTree(a);
    return 0;
}