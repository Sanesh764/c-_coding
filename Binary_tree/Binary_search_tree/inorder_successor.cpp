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

int inorder_successor(Node* root){
    if(root->right==nullptr) return 0;
    Node* succ=root->right;
    while (succ->left!=nullptr){
        succ=succ->left;
    }
    return succ->val;
    
}

int main() {
    Node* a=new Node(10);
    Node* b=new Node(5);
    Node* c=new Node(20);
    Node* d=new Node(2);
    Node* e=new Node(8);
    Node* f=new Node(15);
    Node* g=new Node(25);
    Node* h=new Node(4);
    Node* i=new Node(12);
    Node* j=new Node(3);
    Node* k=new Node(13);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    d->right=h;
    f->left=i;
    h->left=j;
    i->right=k;

    cout<<inorder_successor(a);
    return 0;
}