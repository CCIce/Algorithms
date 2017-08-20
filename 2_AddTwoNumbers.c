/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* preHead = l1;
    int c=0;
    short int flag=0;
    while(l1 || l2)
    {
        int a = l1->val + l2->val;
        if (a>=10)
        {
            a=a%10;
            if(l1->next == NULL)
            {
                struct ListNode* p;
                p=(struct ListNode *)malloc(sizeof(struct ListNode));
                p->next=NULL;
                p->val=0;
                l1->next = p;
            }
            l1->next->val=l1->next->val+1;
            flag=1;
        }
       
        if(!flag)
        {
            l1->val=a;
        }
        else
        {
            l1->val=a;
            flag=0;
        }

    }
       
    // if(l1->next == NULL && l2->next != NULL)
    // {
        // l1->next=l2->next;
    // }
    
    
    while (l1->next != NULL && l1->next->val >= 10)
    {
        l1=l1->next;
        l1->val=l1->val-10;
        if(l1->next == NULL)
        {
            struct ListNode* p;
            p=(struct ListNode *)malloc(sizeof(struct ListNode));
            p->next=NULL;
            p->val=0;
            l1->next = p;
        }
        l1->next->val=l1->next->val+1;
    }
    
        return preHead;
    
}