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

// Take input in binary tree
Node *take_binary_input()
{
    // step 1.1: take first value for creating root
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(v);
    }

    // step 1.2: create a queue and push root value to that queue
    queue<Node *> q;

    if (root)
    {
        q.push(root);
    }

    // step 2: left and right node works
    while (!q.empty())
    {
        // step 1: extract queue value and make it node parent
        Node *parent = q.front();
        q.pop();

        // step 02: take input and push left/right items
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

        // step 2.2: connect left and right with parent
        parent->left = inLeft;
        parent->right = inRight;

        // step 03: Push children to the parent Node
        if (parent->left)
        {
            q.push(parent->left);
        };
        if (parent->right)
        {
            q.push(parent->right);
        }
    }
}

int main()
{

    return 0;
}
