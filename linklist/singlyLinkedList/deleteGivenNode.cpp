#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
//node diya ho
Node* DeleteNode(Node* head,Node* target){
    if(head==target){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    }

    //node ke jagh value diya ho ki 40 delete karna hai
    Node* DeleteNode(Node* head,int targetVal){
    if(head->val==targetVal){
        head=head->next;
        return head;
    }
    Node* temp=head;
    while(temp->next->val!=targetVal){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
    }
void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
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
    Node* head=a;
    display(head);
    //head=DeleteNode(head,a);//node diya hai
    head=DeleteNode(head,30);//value diya haai

    display(head);
    return 0;
}