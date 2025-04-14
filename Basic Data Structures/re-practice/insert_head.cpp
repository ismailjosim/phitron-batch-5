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

void insert_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}
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
int main()
{
    Node *head = NULL;
    int n;
    cin >> n;
    while (n > 0)
    {
        int v;
        cin >> v;
        insert_head(head, v);
        n--;
    }
    print_list(head);

    return 0;
}
