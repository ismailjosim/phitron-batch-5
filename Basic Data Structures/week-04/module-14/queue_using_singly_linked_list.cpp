#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
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
        }
        tail->next = newNode;
        tail = tail->next;
    };
    void pop()
    {
        Node *deleteNode = head;
        s--;

        head = head->next;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
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

main()
{
    myQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
