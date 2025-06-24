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
//print all value by using function
void diplay(Node* head){
    while (head!=NULL)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}

int size(Node* head){
    int n=0;
    while (head!=NULL){
        head=head->next;
        n++;
    }
    return n;
}

//by using recurison

void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}
void insertAtEnd(Node *head,int val){
    Node* t=new Node(val);
    while(head->next!=NULL){
        head=head->next;
    }
    head->next=t;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    //print all value
//     cout<<a->val<<" ";
//     cout<<a->next->val<<" ";
//     cout<<a->next->next->val<<" ";
// cout<<a->next->next->next->val;

//print all value by using loop
    // Node* temp=a;
    // while(temp!=NULL){
    //     cout<<temp->val<<" ";
    //     temp=temp->next;
    // }

    diplay(a);

    //displayrec(a);
    insertAtEnd(a,59);
    diplay(a);

    //cout<<"the size of linked list is :"<<size(a);

    return 0;
}