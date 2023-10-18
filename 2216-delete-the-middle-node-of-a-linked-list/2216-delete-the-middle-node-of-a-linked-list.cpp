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
    ListNode* deleteMiddle(ListNode* head) {

        if(head==NULL) return NULL;

        if(head!=NULL && head->next==NULL){
            delete head;
            return NULL;
        }
       int len = 0; 
       ListNode* temp = head;

       while(temp!=NULL){
           temp = temp->next;
           len++;
       } 

       int n = floor(len/2);

       ListNode* mid = head;

       for(int i = 0; i<n-1; i++){
           mid = mid->next;
       }

       ListNode* todelete = mid->next;

       mid->next= mid->next->next;
       delete todelete;

       return head;
    }
};