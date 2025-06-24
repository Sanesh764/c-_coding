#include<iostream>
using namespace std;
class Node{
public:
    int val;//data part of the node
    Node* next;//pointer of the next node in the list

    //constructor of initialize the node with data
    Node(int val){
        this->val=val;
        this->next=nullptr;
    }
};
void size(Node* head){
    int size=0;
    Node* curr=head;
    while(curr!=nullptr){
        size++;
        curr=curr->next;
    }
    cout<<"the size of the given linkedList is :"<<size;
}
int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    size(a);
    return 0;
}