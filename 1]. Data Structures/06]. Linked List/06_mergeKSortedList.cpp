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

ListNode* mergeKLists(vector<ListNode*>& lists) {

    vector<int> values;
    for(int i = 0; i < lists.size(); i++) {

        ListNode* temp = lists[i];

        while(temp != NULL) {

            values.push_back(temp->val);

            temp = temp->next;
        }
    }
    if(values.size() == 0) {
        return NULL;
    }
    sort(values.begin(), values.end());

    ListNode* head = new ListNode(values[0]);

    ListNode* tail = head;

    for(int i = 1; i < values.size(); i++) {

        ListNode* newNode = new ListNode(values[i]);

        tail->next = newNode;

        tail = newNode;
    }

    return head;
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
    ListNode* mergedHead = mergeKLists(lists);
    printList(mergedHead);

    return 0;
}