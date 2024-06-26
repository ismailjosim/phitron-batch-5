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

// * insert at head
void insert_at_head(Node *&head, int v)
{
    // step 01: create new node using value
    Node *newNode = new Node(v);

    // step 02: connect head with new NODE next
    newNode->next = head;
    head = newNode;
    cout << endl
         << endl
         << "Successfully " << v << " Inserted at Head " << endl
         << endl;
}

// * Delete an item from NODE List
void delete_a_node(Node *&head, int p)
{

    // step 01: যে ইন্ডেক্সকে ডিলিট করবো তার আগের ইনডেক্সে আসতে হবে
    Node *temp = head;
    for (int i = 0; i < p - 1; i++)
    {
        temp = temp->next;
    }
    // step 02:যে ইন্ডেক্সকে ডিলিট করবো সেটাকে কোথাও স্টোর করে রাখতে হবে
    Node *deleteNode = temp->next;

    // step 03: আগের ইনডেক্সের সাথে ডিলিট করা আইটেমের পরের আইটেমকে কানেক্ট করতে হবে।
    temp->next = temp->next->next;

    // step 04: তারপরে ২নং এ স্টোর করা আইটেমকে ডিলিট করে দিতে হবে।
    delete deleteNode;
    cout << endl
         << endl
         << p << " Index Deleted Successfully" << endl
         << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail: " << endl;
        cout << "Option 2: Print Linked List: " << endl;
        cout << "Option 3: Insert at a specific Position: " << endl;
        cout << "Option 4: Insert at Head: " << endl;
        cout << "Option 5: Delete a Node: " << endl;
        cout << "Option 6: Terminate: " << endl;
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

            // ? if the position is 0
            if (pos == 0)
            {
                cout << "You choose to insert at HEAD: " << endl;
                insert_at_head(head, v);
            }
            else
            {
                insert_at_pos(head, pos, v);
            }
        }
        // ? if the op is 4
        else if (op == 4)
        {
            int v;
            cout << "Enter Value ";
            cin >> v;
            insert_at_head(head, v);
        }

        else if (op == 6)
        {
            break;
        }

        // * delete a NODE
        else if (op == 5)
        {
            int p;
            cout << "Enter Position ";
            cin >> p;
            delete_a_node(head, p);
        }
    }

    return 0;
}
