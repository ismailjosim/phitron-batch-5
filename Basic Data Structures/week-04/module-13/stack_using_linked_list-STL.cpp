#include <bits/stdc++.h>

using namespace std;

class myStack
{
public:
    list<int> ls;
    void push(int v)
    {
        ls.push_back(v);
    };
    void pop()
    {
        ls.pop_back();
    };
    int top()
    {
        return ls.back();
    };
    int size()
    {
        return ls.size();
    }
    bool empty()
    {
        return ls.empty();
    }
};

int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
