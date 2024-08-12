#include <bits/stdc++.h>

// * 1. create structure
// struct Node
// {
//     /* data */
//     int data;
//     Node *next;
// };

// step 01: create Node
class Node
{
public:
    int data;
    Node *next;
};

using namespace std;

int main()
{
    // step 02: create single linked list and assign value
    Node a, b;
    a.data = 10;
    b.data = 20;
    a.next = &a;
    b.next = NULL;

    // step 03: print value
    cout << a.data << endl;
    cout << b.data << endl;

    // print next value using the first list item
    cout << a.next->data << endl;
    cout << (*a.next).data << endl;

    return 0;
}
