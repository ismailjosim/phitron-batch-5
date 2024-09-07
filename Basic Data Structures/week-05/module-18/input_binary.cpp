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

Node *input_tree()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
        root = NULL;
    else
        root = new Node(v);

    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    while (!q.empty())
    {
        // * ber kore ana
        Node *parent = q.front();
        q.pop();

        //* jabotiyo kaj gula ke kora
        int l, r;
        cin >> l >> r;
        Node *left;
        Node *right;

        if (l == -1)
            left = NULL;
        else
            left = new Node(l);

        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        parent->left = left;
        parent->right = right;

        // step 03: children gula ke push korte hobe
        if (parent->left)
        {
            q.push(parent->left);
        }
        if (parent->right)
        {
            q.push(parent->right);
        }
    }
    return root;
};
// level order function
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "Tree not found!";
        return;
    };
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
    Node *root = input_tree();
    level_order(root);
    return 0;
}
