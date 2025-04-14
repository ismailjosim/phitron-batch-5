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

void insert_at_pos(Node *&head, int pos, int v)
{
    Node *newNode = new Node(v);

    // loop through that specific position
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    };

    newNode->next = temp->next;
    temp->next = newNode;
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
            // insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            // print_linked_list(head);
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
