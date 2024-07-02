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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

// delete at position
void delete_pos(Node *head, int pos)
{
    // step 01: set head in temp
    Node *tmp = head;

    // step 02: loop through deleted node's prev node
    for (int i = 1; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    // step 03: store deleted node into a Node
    Node *deleteNode = tmp->next;

    // step 04: connect tmp->next to deleted node's next node
    tmp->next = tmp->next->next;

    // step 05: tmp->next->prev to tmp;
    tmp->next->prev = tmp;

    // step 06: delete deleted node from memory
    delete deleteNode;
}

void delete_tail(Node *&tail)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

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

    int pos;
    cin >> pos;
    if (pos >= size(head))
    {
        cout << "invalid" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head);
    }
    else if (pos == size(head) - 1)
    {
        delete_tail(tail);
    }
    else
    {
        delete_pos(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}
