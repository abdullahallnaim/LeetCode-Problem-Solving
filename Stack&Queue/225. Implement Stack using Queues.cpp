class MyStack
{
public:
    queue<int> q1;
    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        queue<int> q2;
        int res;
        while (!q1.empty())
        {
            int val = q1.front();
            q1.pop();
            if (q1.empty())
            {
                res = val;
                break;
            }
            q2.push(val);
        }
        q1 = q2;
        return res;
    }

    int top()
    {
        queue<int> q2;
        int res;
        while (!q1.empty())
        {
            int val = q1.front();
            q1.pop();
            if (q1.empty())
            {
                res = val;
            }
            q2.push(val);
        }
        q1 = q2;
        return res;
    }

    bool empty()
    {
        return q1.empty();
    }
};