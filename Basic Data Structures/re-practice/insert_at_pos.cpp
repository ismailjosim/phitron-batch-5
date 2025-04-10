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
void print_list(Node *head)
{
    cout << "Your List Item is: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insert_at_pos(Node *&head, int v, int p)
{
    Node *newNode = new Node(v);

    // loop through that specific position
    Node *temp = head;
    for (int i = 0; i < p; i++)
    {
        temp = temp->next;
    }
    // connect temp next with new node
    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{

    return 0;
}
