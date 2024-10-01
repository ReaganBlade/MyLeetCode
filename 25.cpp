// 25. Reverse k group
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    ListNode* reverseLinkedList(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;

        while (temp != NULL) {
            ListNode* front = temp -> next;

            temp -> next = prev;
            prev = temp;
            temp = front;
        }

        return prev;
    }

    ListNode* getKthNode (ListNode* temp, int k) {
        k -= 1;

        while (temp != NULL && k > 0) {
            k--;

            temp = temp -> next;
        }

        return temp;
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {
            ListNode* kthNode = getKthNode(temp, k);

            if (kthNode == NULL) {
                if (prevLast){
                    prevLast -> next = temp;
                }
                break;
            }

            ListNode* nextNode = kthNode -> next;
            kthNode -> next = NULL;

            reverseLinkedList(temp);

            if (temp == head) {
                head = kthNode;
            } else {
                prevLast -> next = kthNode;
            }

            prevLast = temp;
            temp = nextNode;
        }

        return head;
    }
};

int main(){

    return 0;
}