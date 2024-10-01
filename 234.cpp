// 234. Pallindrome Linked List
#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution{
private:
    ListNode* reverseLinkedList(ListNode* head){
        if (head == NULL || head -> next == NULL)
            return head;

        ListNode* newHead = reverseLinkedList(head -> next);
        ListNode* front = head -> next;
        front -> next = head;
        head -> next = NULL;

        return newHead;
    }
public:
    bool isPalindrome(ListNode* head){

        if (head == NULL || head -> next == NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* first = head;
        ListNode* second = reverseLinkedList(slow);

        while(first != NULL && second != NULL){
            if (first -> val == second -> val){
                first = first -> next;
                second = second -> next;
            } else return false;
        }

        return true;
    }
};

int main(){

    return 0;
}