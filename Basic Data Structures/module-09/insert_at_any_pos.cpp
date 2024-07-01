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
    newNode->next = temp->next; // 100->30

    // step 04: connect temp node's next to newNode
    temp->next = newNode;

    // step 05: connect newNode->prev to temp
    newNode->prev = temp;

    // step 06: if newNode->next is not NULL, connect its prev to newNode
    if (newNode->next != NULL)
        newNode->next->prev = newNode;
}
// insert at any position
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode; // if head == NULL insert tail condition will be similar to head
        return;
    };
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_pos(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);
    // step 01: create temp head
    Node *temp = head;

    // step 02: loop through that specific position
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    // step 03: connect newNode->next to temp->next
    newNode->next = temp->next; // 100->30

    // step 04: connect temp node's next to newNode
    temp->next = newNode; // 20->100

    // step 05: connect newNode->prev to temp
    newNode->prev = temp; // 100->20

    // step 06: connect newNode->nextNode->prev to newNode
    newNode->next->prev = newNode; // 30->100
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

    // if(pos === 0){
    //     insert_head(head, val);
    // }

    insert_at_pos(head, 2, 200);
    insert_head(head, tail, 5);
    print_normal(head);
    print_reverse(tail);

    return 0;
}
