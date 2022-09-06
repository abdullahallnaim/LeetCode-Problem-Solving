class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> s1;
        stack<char> s2;
        for (char c1 : s)
        {
            if (c1 == '#')
            {
                if (!s1.empty())
                {
                    s1.pop();
                }
            }
            else
            {
                s1.push(c1);
            }
        }
        for (char c2 : t)
        {
            if (c2 == '#')
            {
                if (!s2.empty())
                {
                    s2.pop();
                }
            }
            else
            {
                s2.push(c2);
            }
        }
        return s1 == s2;
    }
};