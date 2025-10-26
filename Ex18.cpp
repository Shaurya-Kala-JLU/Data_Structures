#include <iostream>
using namespace std;
struct Node {
    int data; 
    Node* next; 
};
Node* createNode(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
}
int main() {
    Node* head = createNode(10);
    Node* second = createNode(20);
    head->next = second;
    Node* third = createNode(30);
    second->next = third;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    return 0;
}