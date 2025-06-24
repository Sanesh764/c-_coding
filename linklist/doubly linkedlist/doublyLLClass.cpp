#include<iostream>
using namespace std;
class Node{//user defind data
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class DLL{
public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;//extra
            tail=temp;
        }
        size++;
    }

    void insertAtIDX(int idx,int val){
        if(idx<0 ||idx>size){
            cout<<"invalid index Error 404 found"<<endl;
        }
        else if(idx==0){
            insertAtHead(val);
        }
        else if(idx==size){
            insertAtTail(val);
        }
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;;
            }    
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra
            t->next->prev=t;//extra
            size++;
        }
    }

    int getAtIdx(int idx){
        if(idx<0 ||idx>=size){
            cout<<"invalid index Error 404 found"<<endl;
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size) return tail->val;
        else{
            Node* temp=head;
            for(int i=01;i<idx;i++){
                temp=temp->next;;
            }    
            return temp->val;
        }
    }


    void insertAtHead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        size++;
    }
void deleteAtHead(){
    if(size==0){
        cout<<"list is Empty!";
        return;
    }
    head=head->next;
    size--;
}

void DeleteAtIDX(int idx){
    if(size==0){
        cout<<"list is Empty!";
        return;
    }
    else if(size<0 ||idx>=size){
        cout<<"invalid idx!";
        return;
    }
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node* temp=head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}

void deleteAtTail(){
    if(size==0){
        cout<<"list is Empty!";
        return;
    }
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}

    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    DLL list;
    list.insertAtTail(10);
    list.insertAtTail(20);
    list.insertAtTail(30);
    list.insertAtTail(40);
    list.display();
    list.insertAtTail(50);
    list.display();
    list.insertAtHead(60);
    list.display();
    list.insertAtIDX(2,70);
    list.display();
}

