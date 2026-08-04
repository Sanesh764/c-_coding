#include<iostream>
#include<vector>
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
   vector<int>ans;
   Node* curr=a;
   while (curr!=nullptr){
        if(curr->left!=nullptr){
            Node* pred=curr->left;
            while(pred->right!=nullptr && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==nullptr){//link
                pred->right=curr;
                curr=curr->left;
            } else {
                pred->right=nullptr;
                ans.push_back(curr->val);
            }
        } else {
            ans.push_back(curr->val);
            curr=curr->right;
        }

   }
   

    return 0;
}