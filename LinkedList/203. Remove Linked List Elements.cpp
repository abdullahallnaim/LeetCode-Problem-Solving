class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != NULL and head->val == val)
        {
            head = head->next;
        } // we check untill we get the head value equals to the val
        if (head == NULL)
            return head;
        struct ListNode *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->val == val) 
            {
                temp->next = temp->next->next; // when temp->next value is equals to val then we shift our temp->next to temp->next->next;
            }
            else
            {
                temp = temp->next;
            }
        }
        return head;
    }
};