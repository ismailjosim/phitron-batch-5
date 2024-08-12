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
    return 0;
}
