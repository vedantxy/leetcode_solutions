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
    ListNode* deleteDuplicates(ListNode* head) {

        if (head == NULL) {
            return head;
        }

        ListNode* i = head;
        ListNode* j = head->next;
        ListNode* dummy = new ListNode();
        ListNode* temp = dummy;

        while (j != NULL) {
            if (i->val == j->val) {
                j = j->next;
            } else {
                if (i->val == i->next->val) {
                    i = j;
                    j = j->next;
                } else {
                    dummy->next = i;
                    i = i->next;
                    j = j->next;
                    dummy = dummy->next;
                }
            }
        }
        if (i->next == NULL) {
            dummy->next = i;
            dummy = dummy->next;
        }
        dummy->next = NULL;
        return temp->next;
    }
};