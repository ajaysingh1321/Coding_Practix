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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next) {
            return head;  // No need to rearrange for 0 or 1 element.
        }
        
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenStart = even;

        while (even != nullptr && even->next != nullptr) {
            odd->next = even->next;  // Update the odd's next pointer
            odd = odd->next;
            even->next = odd->next;  // Update the even's next pointer
            even = even->next;
        }

        odd->next = evenStart;  // Connect the last odd node to the first even node

        return head;
    }
};
