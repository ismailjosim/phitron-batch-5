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
// step 02: input tree
Node *input_tree()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
    {
        root == NULL;
    }
    else
    {
        root = new Node(v);
    }

    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {
        Node *parent = q.front();

        q.pop();
        int l, r;
        cin >> l >> r;

        Node *inLeft;
        Node *inRight;
        if (l == -1)
        {
            inLeft = NULL;
        }
        else
        {
            inLeft = new Node(l);
        }
        if (r == -1)
        {
            inRight = NULL;
        }
        else
        {
            inRight = new Node(r);
        }

        parent->left = inLeft;
        parent->right = inRight;

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

        Node *f = q.front();
        q.pop();

        cout << f->data << " ";

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
};

void insert(Node *&root, int x)
{
    // * Base case
    if (root == NULL)
    {
        root = new Node(x);
        return;
    }

    //* direction based on root->data
    if (x < root->data)
    {
        if (root->left == NULL)
        {
            root->left = new Node(x);
        }
        else
        {
            insert(root->left, x);
        }
    }
    else
    {
        if (root->right == NULL)
        {
            root->right = new Node(x);
        }
        else
        {
            insert(root->right, x);
        }
    }
}

int main()
{
    Node *root = input_tree();
    insert(root, 5);
    insert(root, 23);
    insert(root, 27);
    level_order(root);

    return 0;
}
