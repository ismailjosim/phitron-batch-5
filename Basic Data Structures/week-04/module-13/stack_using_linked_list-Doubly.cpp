#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int v)
    {
        sz++;
        // insert in tail
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void pop()
    {
        if (sz == 0)
            return;
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
            head = NULL;
        else
            tail->next = NULL;

        delete deleteNode;
    };
    int top()
    {
        if (tail != NULL)
        {
            return tail->data;
        }
        throw runtime_error("Stack is empty");
    };
    int size()
    {
        return sz;
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

    while (st.size() > 0)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
