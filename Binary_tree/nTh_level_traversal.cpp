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
//reviese
int level(Node* root){
    if(root==nullptr) return 0;
    return 1+max(level(root->left),level(root->right));
}
void nthLevel(Node* root,int curr,int level){
    if(root==nullptr) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;//ye satate likh dene ke badh extra call nhi hoga
    }
    nthLevel(root->left,curr+1,level);
    nthLevel(root->right,curr+1,level);
}


//right to left
void nthLevel2(Node* root,int curr,int level){
    if(root==nullptr) return;
    if(curr==level){
        cout<<root->val<<" ";
        return;//ye satate likh dene ke badh extra call nhi hoga
    }
    nthLevel2(root->right,curr+1,level);
    nthLevel2(root->left,curr+1,level);
}
void levelOrder(Node* root){

    int n=level(root);

    for(int i=0;i<n;i++){
        nthLevel(root,0,i);
        cout<<endl;
    }
     for(int i=0;i<n;i++){
        nthLevel2(root,0,i);
        cout<<endl;
    }
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
   // nthLevel(a,0,2);

   levelOrder(a);
   cout<<endl;
   levelOrder(a);
    return 0;
}