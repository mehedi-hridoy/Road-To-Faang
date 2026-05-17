// reorder list
// https://www.hellointerview.com/learn/code/linked-list/reorder-list

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

ListNode* reverseList(ListNode* head) {

    ListNode* prev = NULL;

    ListNode* current = head;

    while(current != NULL) {

        ListNode* nextTemp = current->next;

        current->next = prev;

        prev = current;

        current = nextTemp;
    }

    return prev;
}

void reorderList(ListNode* head) {

    if(head == NULL || head->next == NULL) {
        return;
    }

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast->next != NULL && fast->next->next != NULL) {

        slow = slow->next;

        fast = fast->next->next;
    }

    ListNode* secondHalf = reverseList(slow->next);

    slow->next = NULL;

    ListNode* firstHalf = head;

    while(secondHalf != NULL) {

        ListNode* firstNext = firstHalf->next;

        ListNode* secondNext = secondHalf->next;

        firstHalf->next = secondHalf;

        secondHalf->next = firstNext;

        firstHalf = firstNext;

        secondHalf = secondNext;
    }
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

    reorderList(head);

    printList(head);

    return 0;
}