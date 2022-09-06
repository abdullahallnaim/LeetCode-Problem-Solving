class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> s;
        queue<int> q;
        if (head == NULL)
            return false;
        while (head != NULL)
        {
            s.push(head->val);
            q.push(head->val);
            head = head->next;
        }
        while (!q.empty() and !s.empty())
        {
            if (q.front() != s.top())
            {
                return false;
            }
            q.pop();
            s.pop();
        }
        return true;
    }
};