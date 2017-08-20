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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head)
        {
            ListNode* l = head;
            while(l->next)
            {
                if(l->val == l->next->val)
                {
                    ListNode* p = l->next;
                    l->next = l->next->next;
                    free(p);
                }
                else
                    l=l->next;
            }
            return head;
        }
        else
            return NULL;
    }
};