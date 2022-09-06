class Solution
{
public:
    int intConvertion(string s)
    {
        int sum = 0;
        int k = 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '-')
                break;
            sum += (s[i] - '0') * k;
            k *= 10;
        }
        if (s[0] == '-')
            return -sum;
        return sum;
    }
    int calPoints(vector<string> &ops)
    {
        stack<int> st;
        long long int sum = 0;
        for (auto s : ops)
        {
            if (s == "+")
            {
                int f = st.top();
                st.pop();
                int s = st.top();
                st.push(f);
                st.push(f + s);
            }
            else if (s == "D")
            {
                st.push(st.top() * 2);
            }
            else if (s == "C")
            {
                st.pop();
            }
            else
            {
                int res = intConvertion(s);
                cout << res << endl;
                st.push(res);
            }
        }
        while (!st.empty())
        {
            sum += st.top();

            st.pop();
        }
        return sum;
    }
};