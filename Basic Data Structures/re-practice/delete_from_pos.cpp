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

/*
 * steps
 * step-01: loop through the prev position that item want to remove
 * step-02: store the node temporary that need to delete.
 * step-03: collection deleted node's prev and next node
 * step-04: delete step-02 temp node.
 */

void delete_a_node(Node *&head, int p)
{
    // step-01
    Node *temp = head;
    for (int i = 1; i < p - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}

int main()
{

    return 0;
}
