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
void insert_pos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);

    // step 01: create temp head
    Node *temp = head;

    // step 02: loop through that specific position
    for (int i = 0; i < pos; i++)
    {
        temp = temp->next;
    }

    // step 03: connect temp node with newNode->next
    newNode->next = temp; // 100->30

    // step 04: connect newNode with Temp node nex
    temp->next = newNode; // 20->100

    // step 05: connect next of the newNode Prev with newNode
    newNode->next->prev = newNode; // 100<-30

    // step 05: connect temp with newNode Prev
    newNode->prev = temp;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);

    insert_pos(head, 2, 100);
    print_normal(head);
    print_reverse(tail);

    return 0;
}
