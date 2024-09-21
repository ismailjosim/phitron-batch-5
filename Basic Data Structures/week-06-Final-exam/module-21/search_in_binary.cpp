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

// step : search in BST
bool search(Node *root, int x)
{
    // base case
    if (root == NULL)
        return false;
    // best case: if match in root
    if (root->data == x)
        return true;

    // if not: move to left or right depending of x. move left if x is less than root->data move right if x is greater then root->data

    if (x < root->data)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

int main()
{
    Node *root = input_tree();
    // level_order(root);
    if (search(root, 20))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
