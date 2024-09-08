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

// level order function
void level_order(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // step 01: বের করে আনা
        Node *f = q.front();
        q.pop();

        // step 02: যাবতীয় যা কাজ আছে সেগুলো করা।
        cout << f->data << " ";

        // step 03: তার children গুলোকে লাইনে দাড় করিয়ে দেওয়া। it will print from left to right
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
};

int main()
{
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

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left = f;
    d->right = g;
    h->right = i;

    level_order(root);

    return 0;
}
