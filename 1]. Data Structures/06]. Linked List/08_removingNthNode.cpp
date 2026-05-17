#include<bits/stdc++.h>
using namespace std;

class ListNode {

public:

    int val;
    ListNode* next;

    ListNode(int value) {

        val = value;
        next = NULL;
    }
};

void printList(ListNode* head) {

    ListNode* temp = head;

    while(temp != NULL) {

        cout << temp->val << " ";

        temp = temp->next;
    }

    cout << endl;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {

    int length = 0;

    ListNode* current = head;

    while(current != NULL) {

        length++;

        current = current->next;
    }

    int target = length - n;

    if(target == 0) {

        return head->next;
    }

    current = head;

    for(int i = 0; i < target - 1; i++) {

        current = current->next;
    }

    current->next = current->next->next;

    return head;
}

int main() {

    int n;
    cin >> n;

    int value;
    cin >> value;

    ListNode* head = new ListNode(value);

    ListNode* tail = head;

    for(int i = 1; i < n; i++) {

        cin >> value;

        ListNode* newNode = new ListNode(value);

        tail->next = newNode;

        tail = newNode;
    }

    int removePosition;
    cin >> removePosition;

    head = removeNthFromEnd(head, removePosition);

    printList(head);

    return 0;
}