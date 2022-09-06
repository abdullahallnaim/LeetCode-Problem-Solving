class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        struct ListNode *prev = NULL;
        struct ListNode *cur = head;
        struct ListNode *NEXT;
        while (cur != NULL)
        {
            NEXT = cur->next;
            cur->next = prev;
            prev = cur;
            cur = NEXT;
        }
        return prev;
    }
};