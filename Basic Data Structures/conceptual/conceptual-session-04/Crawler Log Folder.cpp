class Solution
{
public:
    int minOperations(vector<string> &logs)
    {
        stack<string> str;
        for (string s : logs)
        {
            if (s == "../")
            {
                if (!str.empty())
                {
                    str.pop();
                }
            }
            else if (s == "./")
            {
                continue;
            }
            else
            {
                str.push(s);
            }
        }
        return str.size();
    }
};
