//queue from linked list
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Queue{
private:
    Node* front;
    Node* rear;
public:
    Queue(){
        front=nullptr;
        rear=nullptr;
    }
    bool isEmpty(){
        return front==nullptr;
    }
    void enqueue(int value){
        Node* newNode=new Node();
        newNode->data=value;
        newNode->next=nullptr;
        if(rear==nullptr){
            front=rear=newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
        cout<<value<<" enqueued to the queue.\n";
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty. Cannot dequeue.\n";
            return;
        }
        Node* temp=front;
        front=front->next;
        if(front==nullptr){
            rear=nullptr;
        }
        cout<<temp->data<<" dequeued from the queue.\n";
        delete temp;
    }
    void peek(){
        if(isEmpty()){
            cout<<"Queue is empty.\n";
        }else{
            cout<<"Front element is: "<<front->data<<"\n";
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty.\n";
            return;
        }
        Node* temp=front;
        cout<<"Queue elements: ";
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};
int main(){
    Queue q;
    int choice,value;
    while(true){
        cout<<"\n--- Queue Menu ---\n";
        cout<<"1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter value to enqueue: ";
                cin>>value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                cout<<"Exiting program.\n";
                return 0;
            default:
                cout<<"Invalid choice. Try again.\n";
        }
    }
}
