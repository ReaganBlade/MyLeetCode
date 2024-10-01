// 148. Sort List
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


// Brute force
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> array;
        ListNode* temp;

        while(temp!=NULL){
            array.push_back(temp -> val);
            temp = temp -> next;
        }

        sort(array.begin(), array.end());

        temp = head;
        int i = 0;
        while(temp != NULL){
            temp -> val = array[i];
            i++;
            temp = temp -> next;
        }

        return head;
    }
};

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        
    }
};

int main(){

    return 0;
}