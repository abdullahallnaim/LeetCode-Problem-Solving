class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *tmp = head;
        if (head == NULL)
            return head;
        while (tmp->next != NULL)
        {
            if (tmp->val == tmp->next->val)
            {
                ListNode *del = tmp->next;
                tmp->next = del->next;
                delete del;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        return head;
    }
};