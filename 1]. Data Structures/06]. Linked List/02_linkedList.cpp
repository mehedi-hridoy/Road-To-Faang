// dynamic linked list 
#include<bits/stdc++.h>
using namespace std; 

class Node {
    public: 
       int data; 
       Node* next; 

       Node(int value) {
        data = value;
        next = NULL;
       }
};

int main() {
    int n; 
    cin >> n; 
    Node* head = NULL;
    Node* tail = NULL;

    for(int i = 0; i < n; i ++) {
        int value; 
        cin >> value;

        Node* newNode = new Node(value);

        if(head == NULL) {
            head = newNode; 
            tail = newNode;
        } else {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    Node* temp = head;

    while(temp != NULL) {
        cout << temp-> data << " ";
        temp = temp-> next; 
    }

    return 0; 
}