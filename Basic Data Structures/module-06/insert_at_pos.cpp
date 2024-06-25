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
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return; //* return or it will insert value infinitely
    }
    // step 2.2: insert rest of the value or if tail is exist
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // * after loop temp now = last node
    temp->next = newNode;

    // * insert at tail
    cout << endl
         << "Inserted at tail" << endl
         << endl;
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
    cout << endl
         << endl;
}

// * inserted at position function
void insert_at_pos(Node *&head, int pos, int v)
{

    // step 01: create new node
    Node *newNode = new Node(v);

    // step 02: loop through that specific position
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    // * now we reached the specific postion's NODE where we insert the value
    // step 03: connect temp next with new node
    newNode->next = tmp->next;

    // step 04: connect temp node with new Node.
    tmp->next = newNode;

    // step 05: [OPTIONAL] confirmation message for successfully insertion
    cout << endl
         << endl
         << "Successfully " << v << " Inserted at position " << pos << endl
         << endl;
};

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail: " << endl;
        cout << "Option 2: Print Linked List: " << endl;
        cout << "Option 3: Insert at a specific Position: " << endl;
        cout << "Option 4: Terminate: " << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            //* Insert at any position code:
            int pos, v;
            cout << "Enter Position ";
            cin >> pos;
            cout << "Enter Value ";
            cin >> v;
            insert_at_pos(head, pos, v);
        }
        else if (op == 4)
        {
            break;
        }
    }

    return 0;
}
