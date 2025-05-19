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

int size(Node *head)
{
    Node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}

void normal_print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    };
    cout << endl;
}

void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode; // tail er next e new node bosbe
    newNode->prev = tail; // new node er sathe tail prev hesebe connect hobe.
    tail = tail->next;    // er pore new node ke tail hesebe update kore dite hobe.
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;

    int pos, v;
    cin >> pos >> v;
    if (pos == 0)
    {
        insert_head(head, tail, v);
    }
    else if (pos == size(head))
    {
        insert_tail(head, tail, v);
    }
    else if (pos >= size(head))
    {
        cout << "Invalid Position" << endl;
    }
    else
    {
        cout << "Insert At Position" << endl;
    }

    normal_print(head);

    return 0;
}
