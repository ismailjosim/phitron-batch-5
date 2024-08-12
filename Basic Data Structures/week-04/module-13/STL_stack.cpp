#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<int> st;

    // Take input and push values onto the stack
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // Pop values from the stack and print them, which results in reverse order
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
