//Given the head of a linked list, delete every alternate element from the list starting from the second element.
// Input n = 6;
// List = 1->2->3->4->5->6
// Output: 1->3->5
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

void insertAtEnd(Node* &head, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    
}

void traverse(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->value <<"->";
        temp = temp->next;
    } cout << "NULL" << endl;
}

void deleteAlternateNode(Node* &head) {
    Node* temp = head;
    while(temp != NULL && temp->next != NULL) {
        Node* deleteNode = temp->next;
        temp->next = temp->next->next;
        temp = temp->next;
        free(deleteNode);
    }
}

int main() {
    Node* head = NULL;
    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    traverse(head);
    deleteAlternateNode(head);
    traverse(head);
    return 0; 
}