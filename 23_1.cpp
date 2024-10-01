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

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

    ListNode* convert(vector<int> arr){
        ListNode * dummy = new ListNode(0);
        ListNode * curr = dummy;
        for (int i = 1; i < arr.size(); i++){
            ListNode * newNode = new ListNode(arr[i]);
            curr -> next = newNode;
            curr = curr -> next;
        }

        return dummy -> next;
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> array;
        for (int i = 0; i < lists.size(); i++){
            ListNode * temp = lists[i];
            while(temp != nullptr){
                array.push_back(temp -> val);
                temp = temp -> next;
            }
        }

        sort(array.begin(), array.end());

        ListNode * result = convert(array);

        return result;
    }
};