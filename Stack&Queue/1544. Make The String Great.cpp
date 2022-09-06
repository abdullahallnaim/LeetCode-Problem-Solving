class Solution
{
public:
    string makeGood(string s)
    {
        stack<int> st;
        string ch = ""; //we have to return a string
        for (char c : s)
        {
            if (st.empty())
            {
                st.push(c); // when the stack is empty, then we push first element;
                continue;   // now stack has the first element of the string, so to deal with next char we use continue;
            }
            if (c >= 'a' and c <= 'z') // now checking character is small
            {
                int k = st.top();
                if (k >= 'A' and k <= 'Z' and k + 32 == c) // checking if stack top element k is uppercase form of c;
                {
                    st.pop(); // if uppercase then remove it;
                }
                else
                {
                    st.push(c); // else pushing the stack
                }
            }
            else if (c >= 'A' and c <= 'Z') 
            {
                int k = st.top();
                if (k >= 'a' and k <= 'z' and k - 32 == c) // checking if stack top element k is lowercase form of c;
                {
                    st.pop();
                }
                else
                {
                    st.push(c);
                }
            }
        }
        while (!st.empty())
        {
            ch.push_back(st.top());
            st.pop();
        }
        reverse(ch.begin(), ch.end()); // have to reverse the string as we push the characters in reverse order
        return ch;
    }
};