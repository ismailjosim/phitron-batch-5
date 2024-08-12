class Solution
{
public:
    int calPoints(vector<string> &op)
    {
        stack<int> st;
        for (string s : op)
        {
            // if s == "D"
            if (s == "D")
            {
                st.push(st.top() * 2);
            }
            // if s == "C"
            else if (s == "C")
            {
                st.pop();
            }
            // if s = "+"
            else if (s == "+")
            {
                int prev01 = st.top();
                st.pop();
                int prev02 = st.top();
                st.push(prev01);
                st.push(prev01 + prev02);
            }
            // if s = value
            else
            {
                int i = stoi(s);
                st.push(i);
            }
        }
        int total = 0;
        while (!st.empty())
        {
            total += st.top();
            st.pop();
        }
        return total;
    }
};
