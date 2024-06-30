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

// print function
void print_list(Node *head)
{
    // Node *tmp = head;
    // while (tmp != NULL)
    // {
    //     /* code */

    //     cout << tmp->data << " ";
    //     tmp = tmp->next;
    // }

    // same operation using for loop
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        cout << tmp->data << " ";
    }
}
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
}
int size(Node *head)
{
    int count = 0;
    for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
    {
        count++;
    }
    return count;
}

int main()
{
    // create node
    // Node *node_name = new Node(value)
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connect on node with another
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    print_list(head);
    int pos, val;
    cin >> pos >> val;
    int countSize = size(head);
    if (pos > countSize)
    {
        cout << "invalid size";
        return;
    }
    else
    {
        insert(head, pos, val);
    }
    print_list(head);
    return 0;
}
