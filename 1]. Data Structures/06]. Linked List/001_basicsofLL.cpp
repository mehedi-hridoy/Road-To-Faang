#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node(int v) {
        value = v;
        next = NULL;
    }
};

void traverse(Node* head) {
    Node* temp = head;
    while(temp!= NULL) {
        cout << temp ->value << "->";
        temp= temp->next;

    } cout << "NULL"<< endl;
}

void insertAthead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next != NULL) {
        temp  = temp -> next;
    }

    temp->next = newNode;
}
void insertAtMiddle(Node* &head, int val,int position) {
    Node* newNode = new Node(val);
    Node* prev = head;
    int count = 1; 
    while(count<(position-1)) {
        prev = prev->next;
        count++;
    }

    newNode->next = prev->next;
    prev->next = newNode;

}
int main() {
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    node1->next = node2;
    node2->next = NULL;
    Node* head = node1;

    traverse(head);
    insertAthead(head,3);
    traverse(head);
    insertAthead(head,4);
    traverse(head);
    return 0;
}