#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    else
    {
        newNode->next = head;
        head = newNode;
        return;
    }
}

void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return;
}

void delete_at_pos(Node *&head, int pos)
{
    // error handle: empty or invalid pos
    if (head == NULL || pos < 0)
        return;

    Node *temp = head;

    //* delete head(pos==0)
    if (pos == 0)
    {
        head = head->next;
        delete temp;
        return;
    }

    // delete at pos
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp->next == NULL)
            return;

        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    // deleteNode and connect next node
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    int t;
    cin >> t;
    while (t > 0)
    {
        int p, val;
        cin >> p >> val;

        if (p == 0)
        {
            insert_at_head(head, val);
        }
        else if (p == 1)
        {
            insert_at_tail(head, val);
        }
        else if (p == 2)
        {
            delete_at_pos(head, val);
        }
        print_linked_list(head);
        t--;
    }
    return 0;
}
