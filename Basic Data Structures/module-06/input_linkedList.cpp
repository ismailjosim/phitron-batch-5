#include <bits/stdc++.h>

using namespace std;

// step 01: create node
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

// step 02: create insert function
void insert_at_tail(Node *&head, int v)
{
    // step 01: create new node using value
    Node *newNode = new Node(v);

    // step 2.1: handle exception if the list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    // step 2.2: insert rest of the value or if tail is exist
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// step 03: print the value
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    int v;
    Node *head = NULL;
    cout << "Enter Your List items: ";
    while (true)
    {
        /* code */

        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, v);
    }

    print_linked_list(head);

    return 0;
}
