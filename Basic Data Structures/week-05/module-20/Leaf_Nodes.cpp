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
};
void print_leaf(Node *root, vector<int> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        v.push_back(root->data);

    print_leaf(root->left, v);
    print_leaf(root->right, v);
}

int main()
{
    Node *root = input_tree();
    vector<int> v;
    print_leaf(root, v);

    sort(v.begin(), v.end(), greater<int>());

    for (int val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
