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
#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr){}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *dummy = new ListNode();
        ListNode *curr = dummy;
        // Use a min-heap (priority_queue) with greater<int> to sort in ascending order.
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<pair<int, ListNode*>>> pq;

        // Add the first node of each list to the priority queue if it's not null.
        for (int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];
            if (temp != nullptr) {
                pq.push({temp->val, temp});
            }
        }

        while (!pq.empty()) {
            pair<int, ListNode*> p = pq.top();
            pq.pop();
            curr->next = p.second;
            curr = curr->next;

            if (p.second->next != nullptr) {
                pq.push({p.second->next->val, p.second->next});
            }
        }

        return dummy->next;
    }
};