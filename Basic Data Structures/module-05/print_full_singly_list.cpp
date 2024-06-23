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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    // connect
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // * work: print the full singly linked list
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
    //! warning: in this way if we print the value we will make head = NULL at the end of the loop. if we try to print again we won't get the value. because head value is set = NULL after finishing the first loop. so for that we will use a temporary pointer which will hold head i.e: temp = head

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    //* again if we want to get the value we need to assign temp = head

    return 0;
}
