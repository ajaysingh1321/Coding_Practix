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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
       ListNode* p = NULL;
       ListNode* q = NULL;

       while(head != NULL){
           p = q;
           q = head;
           head = head->next;
           q->next = p;
        }
        head = q;
        return head;
    }
};