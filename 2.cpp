// 2. Add Two Numbers
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

// Wrong Solution
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         long long number1 = l1 -> val;
//         long long number2 = l2 -> val;

//         l1 -> next;
//         l2 -> next;

//         while(l1 != NULL){
//             number1 += 10*(l1 -> val);
//             l1 = l1 -> next;
//         }

//         while(l2 != NULL){
//             number2 += 10*(l2 -> val);
//             l2 = l2 -> next;
//         }

//         long long sum = number1 + number2;
//         ListNode* newHead = new ListNode();
//         ListNode * temp = newhead;
        
//         temp -> val = sum % 10;
//         sum /= 10;

//         while(sum != 0){
//             ListNode* newNode = new ListNode(sum % 10);
//             sum /= 10;
//             temp -> next = newNode;
//             temp = temp -> next;
//         }

//         return newHead;
//     }
// };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode(); 
        ListNode *temp = dummy; 
        int carry = 0;
        while( (l1 != NULL || l2 != NULL) || carry) {
            int sum = 0; 
            if(l1 != NULL) {
                sum += l1->val; 
                l1 = l1 -> next; 
            }
            
            if(l2 != NULL) {
                sum += l2 -> val; 
                l2 = l2 -> next; 
            }
            
            sum += carry; 
            carry = sum / 10; 
            ListNode *node = new ListNode(sum % 10); 
            temp -> next = node; 
            temp = temp -> next; 
        }
        return dummy -> next; 
    }
};

int main(){

    return 0;
}