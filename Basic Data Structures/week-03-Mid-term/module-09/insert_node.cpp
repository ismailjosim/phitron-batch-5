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

void print_normal(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert(Node *&head, Node *&tail, int pos, int v)
{
    Node *newNode = new Node(v);

    // Insert at head
    if (pos == 0 || head == NULL)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        return;
    }

    // Insert at tail
    if (pos == -1)
    {
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
        return;
    }

    // Insert at a specific position
    Node *temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        // If temp is NULL, pos is beyond the list length, append at the end
        if (tail != NULL)
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    else
    {
        newNode->next = temp->next;
        if (temp->next != NULL)
        {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;
        if (newNode->next == NULL)
        {
            tail = newNode; // Update tail if we inserted at the end
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    // Manually connect the nodes
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    c->next = tail;
    tail->prev = c;

    int t;
    cin >> t;
    while (t > 0)
    {
        int pos, val;
        cin >> pos >> val;
        insert(head, tail, pos, val);
        print_normal(head);
        print_reverse(tail);
        t--;
    }

    return 0;
}
