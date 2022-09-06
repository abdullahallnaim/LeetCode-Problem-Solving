class Solution
{
public:
    ListNode *head = NULL;
    void insertAtTail(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        ListNode *tmp = head;
        while (tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val <= list2->val)
            {
                insertAtTail(list1->val);
                list1 = list1->next;
            }
            else
            {
                insertAtTail(list2->val);
                list2 = list2->next;
            }
        }
        while (list1 != NULL)
        {
            insertAtTail(list1->val);
            list1 = list1->next;
        }
        while (list2 != NULL)
        {
            insertAtTail(list2->val);
            list2 = list2->next;
        }
        return head;
    }
};