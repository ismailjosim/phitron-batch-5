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
void print_lvl(Node *root, int x)
{
    if (root == NULL)
    {
        cout << "Invalid" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);
    int curr_lvl = 0;

    while (!q.empty())
    {
        int lvl_sz = q.size();
        if (curr_lvl == x)
        {
            bool first = true;
            while (lvl_sz-- > 0)
            {
                Node *node = q.front();
                q.pop();
                if (!first)
                    cout << " ";
                cout << node->data;
                first = false;
            }
            cout << endl;
            return;
        }

        while (lvl_sz--)
        {
            Node *node = q.front();
            q.pop();
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        curr_lvl++;
    }

    cout << "Invalid" << endl;
}

int main()
{
    Node *root = input_tree();
    int x;
    cin >> x;
    print_lvl(root, x);

    return 0;
}
