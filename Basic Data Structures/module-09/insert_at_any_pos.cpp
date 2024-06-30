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

// insert at any position
void insert_pos(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);

    // if inserting at the head (pos == 0)
    if (pos == 0)
    {
        newNode->next = head;
        if (head != NULL)
            head->prev = newNode;
        head = newNode;
        return;
    }

    // step 01: create temp head
    Node *temp = head;

    // step 02: loop through that specific position
    for (int i = 0; i < pos - 1; i++)
    {
        if (temp->next == NULL)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        temp = temp->next;
    }

    // step 03: connect newNode->next to temp->next
    newNode->next = temp->next;

    // step 04: connect temp node's next to newNode
    temp->next = newNode;

    // step 05: connect newNode->prev to temp
    newNode->prev = temp;

    // step 06: if newNode->next is not NULL, connect its prev to newNode
    if (newNode->next != NULL)
        newNode->next->prev = newNode;
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

    insert_pos(head, 2, 100);
    print_normal(head);
    print_reverse(tail);

    return 0;
}
