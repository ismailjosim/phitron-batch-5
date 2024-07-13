#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<char> st;
    string s;
    cin >> s;
    for (char c : s)
    {
        if (!st.empty() && c == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    // print out the the output from stack
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());

    for (char c : ans)
    {
        cout << c;
    }
    cout << endl;

    return 0;
}
