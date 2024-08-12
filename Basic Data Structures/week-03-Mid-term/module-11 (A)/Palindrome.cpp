#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
// insert functions
//* 1: insert at head
void insert_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

// *2: insert at tail
void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

// *3: insert any position
void insert_pos(Node *&head, int pos, int v)
{

    Node *newNode = new Node(v);
    Node *tmp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void isPalindrome(Node *head, Node *tail)
{
    while (head != NULL && tail != NULL && head != tail && head->prev != tail)
    {
        if (head->data != tail->data)
        {
            cout << "NO" << endl;
            return;
        }
        head = head->next;
        tail = tail->prev;
    }
    cout << "YES" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;

    while (true)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_tail(head, tail, v);
    }

    isPalindrome(head, tail);

    return 0;
}
