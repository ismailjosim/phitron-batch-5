#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
// print values in pre-order
void postOrder(Node *root)
{
    // step 04: base case:
    if (root == NULL)
    {
        return;
    };

    // step 01: print left
    postOrder(root->left);

    // step 02: print right
    postOrder(root->right);

    // step 03: print the value
    cout << root->data << " ";
}

int main()
{
    //* Create NODE
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    //* connection
    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;

    postOrder(root);

    return 0;
}
