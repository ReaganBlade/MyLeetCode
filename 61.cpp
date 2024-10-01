// 61. Rotate List
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

// class Solution {

//     int calcLen(ListNode* root){
//         if (root == NULL){
//             return 0;
//         }
//         int count = 0;
//         while(root){
//             count++;
//             root = root -> next;
//         }

//         return count;
//     }


// public:
//     ListNode* rotateRight(ListNode* head, int k) {
//         ListNode* tempHead = head;
//         int length = calcLen(head);

//         ListNode* newHead = nullptr;
//         for ( int i = 0; i < abs(length - k); i++ ){
//             if (i == abs(length - k)){
//                 newHead = tempHead -> next;
//                 tempHead -> next = NULL;
//                 break;
//             }
//             tempHead = tempHead -> next;
//         }
//         ListNode* current = newHead;
//         while(current -> next != NULL){
//             current = current -> next;
//         }

//         current -> next = head;

//         return newHead;
//     }
// };

class Solution{
    void insertNode(ListNode* &head, int val){
        ListNode* newNode = new ListNode(val);

        if (head == NULL){
            head = newNode;
            return;
        }

        ListNode* temp = head;
        while(temp -> next != NULL) temp = temp -> next;

        temp -> next = newNode;
        return;
    }
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head -> next == NULL || k == 0) return head;

        ListNode* temp = head;
        int length = 1;
        while(temp -> next != NULL){
            length++;
            temp = temp -> next;
        }

        temp -> next = head;
        k = k % length;
        int end = length - k;
        while(end--) temp = temp -> next;

        head = temp -> next;
        temp -> next = NULL;

        return head;
    }
};


int main(){

    return 0;
}