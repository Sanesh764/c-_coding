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
int minVal(Node* root){
    if(root==nullptr) return INT_MAX;
    int leftMin=minVal(root->left);
    int rightMin=minVal(root->right);
    int ans=min(root->val,min(leftMin,rightMin));//it gives you min value always
    return ans;
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
    diplayTree(a);
    cout<<endl;
    cout<<minVal(a);
    return 0;
}