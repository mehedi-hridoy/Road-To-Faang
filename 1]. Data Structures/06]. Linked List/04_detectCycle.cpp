// https://www.hellointerview.com/learn/code/linked-list/linked-list-cycle
// this is the best animated video on this topic i found on internet 
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

// Floyed Cycle detection also called tortoise here algorithm 

bool hasCycle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast) {
            return true;
        }
    }

    return false;
}

int main() {
    int n; 
    cin >> n; 

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ListNode* head = new ListNode(arr[0]);

    ListNode* tail = head;

    vector<ListNode*> nodes;

    nodes.push_back(head);

    for(int i = 1; i < n; i ++) {
        ListNode* newNode = new ListNode(arr[i]);
        tail -> next = newNode;
        tail = newNode;
        nodes.push_back(newNode);
    }
    

    // manual cycle creation 
    // -1 means no cycle 
    int pos;
    cin >> pos;

    if(pos != -1) {
        tail -> next = nodes[pos];
    }

    if(hasCycle(head)) {
        cout <<  "Cycle Detected " << endl;
    } else {
        cout << "No Cycle " << endl;
    }

    return 0; 

}