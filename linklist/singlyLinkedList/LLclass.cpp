#include<iostream>
using namespace std;
class Node{//user defind data
public:
    int val;
    Node* next;
    Node(int val){//constructor
        this->val=val;
        this->next=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void insertAtTail(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
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
                temp=temp->next;
            }    
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }

    void searchEle(int element){
        Node* temp=head;
        while(temp->next!=NULL){
            if(temp->val==element){
                cout<<"element is found";
                return;
            }
            temp=temp->next;
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
            for(int i=0;i<idx;i++){
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
    LinkedList ll;
    ll.insertAtTail(10);//10->NULL
    ll.display();
    ll.insertAtTail(20);//{10->20->NULL}
    ll.display();
    ll.insertAtTail(30);//{10->20->30->null}
    ll.display();
    ll.insertAtTail(40);//{10->20->30->40->null}
    ll.display();
    //cout<<ll.size;

    ll.insertAtHead(50);//{50->10->20->30->40->null}
    ll.display();

    ll.insertAtHead(24);//{24->50->10->20->30->40->null}
    ll.display();

    ll.insertAtIDX(4,80);//{24->50->10->20->80->30->40->null}
    ll.display();

    cout<<ll.getAtIdx(3)<<endl;

    ll.deleteAtHead();//{50->10->20->80->30->40->null} 24 is deleted
    ll.display();

    ll.deleteAtTail();//{50->10->20->80->30->null} 40 is deleted
    ll.display();

    ll.DeleteAtIDX(3);//{50->10->20->30->null} 80 is deleted
    ll.display();
}