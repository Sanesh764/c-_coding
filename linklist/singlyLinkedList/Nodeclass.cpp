#include<iostream>
using namespace std;
class Node{//linked list node
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;//
    }
};
int main() {
    //10,20,30,40
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    //forming linked list
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;

     cout<<&a<<endl;
    cout<<a.next<<endl;
    cout<<a.val<<endl;

    //without using b mujhe b ka value print karwna hai
    // a.next->val=59;
    // cout<<(a.next)->val<<endl;

    // b.next->val=500;
    // cout<<b.next->val<<endl;

    // c.next->val=49;
    // cout<<c.next->val<<endl;

    //a->next 

    // cout<<((a.next)->next)->next->val<<endl;
    // Node temp=a;;
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next==NULL) break;
    //     temp=*(temp.next);

    // }
    return 0;
}