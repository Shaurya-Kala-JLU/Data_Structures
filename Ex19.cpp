#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* createNode(int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    return newNode;
}
void insertAtBeginning(Node*&head,int value){
    Node* newNode=createNode(value);
    newNode->next=head;
    head=newNode;
}
void insertAtEnd(Node*&head,int value){
    Node* newNode=createNode(value);
    if(head==nullptr){
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;
}
void insertAtPosition(Node*&head,int value,int position){
    if(position==1){
        insertAtBeginning(head,value);
        return;
    }
    Node* newNode=createNode(value);
    Node* temp=head;
    for(int i=1;i<position-1&&temp!=nullptr;i++){
        temp=temp->next;
    }
    if(temp==nullptr){
        cout<<"Position out of range!"<<endl;
        delete newNode;
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void deleteHead(Node*&head){
    if(head==nullptr)return;
    Node* temp=head;
    head=head->next;
    delete temp;
}
void deleteAtPosition(Node*&head,int position){
    if(head==nullptr)return;
    if(position==1){
        deleteHead(head);
        return;
    }
    Node* temp=head;
    for(int i=1;i<position-1&&temp->next!=nullptr;i++){
        temp=temp->next;
    }
    if(temp->next==nullptr){
        cout<<"Position out of range!"<<endl;
        return;
    }
    Node* nodeToDelete=temp->next;
    temp->next=nodeToDelete->next;
    delete nodeToDelete;
}
void deleteLast(Node*&head){
    if(head==nullptr)return;
    if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}
void printList(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head=nullptr;
    insertAtBeginning(head,30);
    insertAtBeginning(head,20);
    insertAtBeginning(head,10);
    printList(head);
    insertAtEnd(head,40);
    insertAtEnd(head,50);
    printList(head);
    insertAtPosition(head,25,3);
    printList(head);
    deleteHead(head);
    printList(head);
    deleteAtPosition(head,3);
    printList(head);
    deleteLast(head);
    printList(head);
    return 0;
}
