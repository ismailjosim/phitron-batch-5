#include <bits/stdc++.h>
using namespace std;

class myStack
{
private:
    vector<int> v;

public:
    // Pushes an element onto the stack
    void push(int val)
    {
        v.push_back(val); // O(1)
    }

    // Removes the top element from the stack
    void pop()
    {
        if (!v.empty())
        {
            v.pop_back(); // O(1)
        }
        else
        {
            cout << "Stack is empty, cannot pop." << endl;
        }
    }

    // Returns the top element of the stack
    int top()
    {
        if (!v.empty())
        {
            return v.back(); // O(1)
        }
        else
        {
            cout << "Stack is empty." << endl;
            return -1; // Returning -1 to indicate an error
        }
    }

    // Returns the size of the stack
    int size()
    {
        return v.size(); // O(1)
    }

    // Checks if the stack is empty
    bool empty()
    {
        return v.empty(); // O(1)
    }

    // Prints all elements of the stack
    void printStack()
    {
        for (int i = 0; i < v.size(); ++i)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50); // top value

    if (st.empty() == false)
    {
        cout << st.top() << endl;
    }

    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    cout << "All elements in the stack: ";
    st.printStack();

    // take input value
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    // print value
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
