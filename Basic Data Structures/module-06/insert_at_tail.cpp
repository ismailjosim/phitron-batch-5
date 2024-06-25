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
}

// step 03: print the value
void print_linked_list(Node *head)
{
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
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail: " << endl;
        cout << "Option 2: Print Linked List: " << endl;
        cout << "Option 3: Terminate: " << endl;
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
            break;
        }
    }

    return 0;
}
