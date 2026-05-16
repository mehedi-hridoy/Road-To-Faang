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

// merge two sorted linked lists
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    // if one list becomes empty
    if(list1 == NULL || list2 == NULL) {

        return (list1 == NULL) ? list2 : list1;
    }

    // choose smaller node
    if(list1->val <= list2->val) {

        list1->next = mergeTwoLists(list1->next, list2);

        return list1;
    }

    else {

        list2->next = mergeTwoLists(list1, list2->next);

        return list2;
    }
}

int main() {

    int n1;
    cin >> n1;

    // first linked list
    ListNode* list1 = NULL;
    ListNode* tail1 = NULL;

    for(int i = 0; i < n1; i++) {

        int value;
        cin >> value;

        ListNode* newNode = new ListNode(value);

        if(list1 == NULL) {

            list1 = newNode;
            tail1 = newNode;
        }

        else {

            tail1->next = newNode;

            tail1 = newNode;
        }
    }

    int n2;
    cin >> n2;

    // second linked list
    ListNode* list2 = NULL;
    ListNode* tail2 = NULL;

    for(int i = 0; i < n2; i++) {

        int value;
        cin >> value;

        ListNode* newNode = new ListNode(value);

        if(list2 == NULL) {

            list2 = newNode;
            tail2 = newNode;
        }

        else {

            tail2->next = newNode;

            tail2 = newNode;
        }
    }

    // merge lists
    ListNode* mergedHead = mergeTwoLists(list1, list2);

    // print merged list
    printList(mergedHead);

    return 0;
}