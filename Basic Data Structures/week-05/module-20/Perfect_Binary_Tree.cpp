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
    {
        root = NULL;
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
}

bool is_perfect(Node *root)
{
    if (root == NULL)
        return true;

    int depth = 0;
    int total_nodes = 0;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int level_size = q.size();
        total_nodes += level_size;

        for (int i = 0; i < level_size; i++)
        {
            Node *node = q.front();
            q.pop();

            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        depth++;
    }

    return total_nodes == pow(2, depth) - 1;
}

int main()
{
    Node *root = input_tree();
    if (is_perfect(root))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
