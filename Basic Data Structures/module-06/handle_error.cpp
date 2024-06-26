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

        // error handle
        if (tmp == NULL)
        {
            cout << "invalid Index";
            return;
        }
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
        // error handle
        if (temp == NULL)
        {
            cout << "invalid Index";
            return;
        }
    }
    // step 02:যে ইন্ডেক্সকে ডিলিট করবো সেটাকে কোথাও স্টোর করে রাখতে হবে
    Node *deleteNode = temp->next;

    // step 03: আগের ইনডেক্সের সাথে ডিলিট করা আইটেমের পরের আইটেমকে কানেক্ট করতে হবে।
    // error handle
    if (temp->next == NULL)
    {
        cout << "invalid Index";
        return;
    }
    temp->next = temp->next->next;

    // step 04: তারপরে ২নং এ স্টোর করা আইটেমকে ডিলিট করে দিতে হবে।
    delete deleteNode;
    cout << endl
         << endl
         << p << " Index Deleted Successfully" << endl
         << endl;
}

// * Delete head function
void delete_head(Node *&head)
{
    // error handle
    // if head is not available
    if (head == NULL)
    {
        cout << "Head is not Available" << endl;
        return;
    }
    // step 01: transfer head to the next head
    Node *deleteNode = head;
    head = head->next;

    // step 02: delete old head
    delete deleteNode;
    cout << endl
         << endl
         << " Head Deleted Successfully" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 0: Terminate: " << endl;                     //* done
        cout << "Option 1: Insert at Tail: " << endl;                //*done
        cout << "Option 2: Print Linked List: " << endl;             //*done
        cout << "Option 3: Insert at a specific Position: " << endl; //*done
        cout << "Option 4: Insert at Head: " << endl;                //* done
        cout << "Option 5: Delete a Node: " << endl;                 //* done
        cout << "Option 6: Delete Head: " << endl;                   //*done
        int op;
        cin >> op;

        if (op == 0)
        {
            break;
        }

        else if (op == 1)
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

        else if (op == 4)
        {
            int v;
            cout << "Enter Value ";
            cin >> v;
            insert_at_head(head, v);
        }

        // * delete a NODE
        else if (op == 5)
        {
            int p;
            cout << "Enter Position ";
            cin >> p;

            if (p == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_a_node(head, p);
            }
        }

        else if (op == 6)
        {
            delete_head(head);
        }
    }

    return 0;
}
