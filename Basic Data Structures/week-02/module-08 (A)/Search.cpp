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
// * insert
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head, int q)
{
    if (head == NULL)
    {
        cout << -1 << endl;
        return;
    }

    Node *tmp = head;
    int idx = 0;
    bool found = false;

    while (tmp != NULL)
    {
        if (tmp->data == q)
        {
            found = true;
            break;
        }
        tmp = tmp->next;
        idx++;
    }

    if (found)
    {
        cout << idx << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int v, q;
        Node *head = NULL;
        Node *tail = NULL;

        while (true)
        {
            cin >> v;
            if (v == -1)
            {
                break;
            }
            else
            {
                insert_tail(head, tail, v);
            }
        }
        cin >> q;
        print_linked_list(head, q);
    }
    return 0;
}
