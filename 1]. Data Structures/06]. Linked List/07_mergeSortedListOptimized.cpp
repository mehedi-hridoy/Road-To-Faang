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

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    if(list1 == NULL) {
        return list2;
    }

    if(list2 == NULL) {
        return list1;
    }

    if(list1->val <= list2->val) {

        list1->next = mergeTwoLists(list1->next, list2);

        return list1;
    }

    else {

        list2->next = mergeTwoLists(list1, list2->next);

        return list2;
    }
}

ListNode* mergeKLists(vector<ListNode*>& lists) {

    if(lists.size() == 0) {
        return NULL;
    }

    ListNode* merged = lists[0];

    for(int i = 1; i < lists.size(); i++) {

        merged = mergeTwoLists(merged, lists[i]);
    }

    return merged;
}

int main() {

    int k;
    cin >> k;

    vector<ListNode*> lists;

    for(int i = 0; i < k; i++) {

        int n;
        cin >> n;

        if(n == 0) {

            lists.push_back(NULL);

            continue;
        }

        int value;
        cin >> value;

        ListNode* head = new ListNode(value);

        ListNode* tail = head;

        for(int j = 1; j < n; j++) {

            cin >> value;

            ListNode* newNode = new ListNode(value);

            tail->next = newNode;

            tail = newNode;
        }

        lists.push_back(head);
    }

    ListNode* result = mergeKLists(lists);

    printList(result);

    return 0;
}