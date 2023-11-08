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
    int GCD(int a, int b){
        if(a==0) return b;
        if(b==0) return a;

        if(a==b) return b;

        if(a>b){
            return GCD(a-b,b);
        }else{
            return GCD(b-a,a);
        }
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head == NULL) return NULL;

        if(head->next == NULL) return head;

        ListNode* first = head;
        ListNode* second = head->next;

        while(second!=NULL){
            int a = first->val;
            int b = second->val;

            int ans = GCD(a,b);
            ListNode* newNode = new ListNode(ans);

            first->next = newNode;
            newNode->next = second;

            first = second;
            second = second->next;
        }

        return head;

        
    }
};