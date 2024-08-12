#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void remove_dup(Node *head)

{
    // * current node
    Node *cNode = head;
    while (cNode != NULL && cNode->next != NULL) // check weather current node is NULL or not and next also
    {
        Node *tmp = cNode;
        while (tmp->next != NULL)
        {
            if (tmp->next->val == cNode->val)
            {
                Node *dup = tmp->next;
                tmp->next = tmp->next->next;
                delete dup;
            }
            else
            {
                tmp = tmp->next;
            }
        }
        cNode = cNode->next;
    }
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    remove_dup(head);
    print_linked_list(head);
    return 0;
}
