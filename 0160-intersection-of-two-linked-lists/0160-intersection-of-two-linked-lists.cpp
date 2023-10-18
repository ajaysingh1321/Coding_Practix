/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1 = 0, len2 = 0;
        ListNode *temp1 = headA, *temp2 = headB;

        // Calculate the lengths of both linked lists
        while (temp1 != nullptr) {
            len1++;
            temp1 = temp1->next;
        }
        
        while (temp2 != nullptr) {
            len2++;
            temp2 = temp2->next;
        }

        // Reset temp1 and temp2 to the beginning of the lists
        temp1 = headA;
        temp2 = headB;

        // Move the longer list's pointer to the same starting position as the shorter list
        int diff = abs(len1 - len2);
        if (len1 > len2) {
            for (int i = 0; i < diff; i++) {
                temp1 = temp1->next;
            }
        } else {
            for (int i = 0; i < diff; i++) {
                temp2 = temp2->next;
            }
        }

        // Traverse both lists together to find the intersection point
        while (temp1 != temp2) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        return temp1; // Return the intersection node (or nullptr if no intersection)
    }
};
