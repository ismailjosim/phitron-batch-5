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

void insert_pos(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);

    // if position == 0 push head;
    // if (pos == 0)
    // {
    //     newNode->next = head;
    //     return;
    // }

    Node *current = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        current = current->next;
    };

    // all collection
    newNode->next = current->next; // connection newNode to the next node
    newNode->prev = current;       // connect newNode to the temp node
    if (current->next != NULL)
    {
        current->next->prev = newNode; // connect the next node to the newnode
    }
    current->next = newNode; // connect current node to newNode;
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

    insert_pos(head, 2, 100);
    normal_print(head);

    return 0;
}
