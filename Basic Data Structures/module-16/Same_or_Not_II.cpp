#include <bits/stdc++.h>

using namespace std;

// linked list part
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
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int s = 0;
    void push(int v)
    {

        Node *newNode = new Node(v);
        s++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    };
    void pop()
    {
        s--;
        Node *deleteNode = head;

        head = head->next;
        if (head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    };
    int front()
    {
        return head->data;
    };
    int size()
    {
        return s;
    }
    bool empty()
    {
        if (s == 0)
            return true;
        else
            return false;
    }
};

int main()
{

    int n, m;
    cin >> n >> m;
    myStack st;
    myQueue q;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    bool flag = true;
    if (n != m)
    {
        flag = false;
    }
    else
    {
        while (!st.empty() && !q.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
