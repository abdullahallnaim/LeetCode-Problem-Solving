class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        int i = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            i++;
            tmp = tmp->next;
        }
        tmp = head;
        int sum = 0;
        while (tmp != NULL)
        {
            if (tmp->val == 1)
            {
                sum += pow(2, i - 1);
            }
            i--;
            tmp = tmp->next;
        }
        return sum;
    }
};