#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;    // stores node's value
    Node *left;  // pointer to the left child
    Node *right; // pointer to the right child

    // Constructor to initialize the node with a value and set children to NULL
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    // step 01 : Input root node data
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
    // Step 2 : Initialize a queue
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }

    // Step 3 : Loop to handle node relationships
    while (!q.empty())
    {

        Node *parent = q.front(); // Extract parent node from the front of the queue
        q.pop();                  // Remove the node from the queue
        int l, r;
        cin >> l >> r; // Take input for left (l) and right (r) child values

        // Step 4 : Create left and right child nodes
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

        // Attach children to the parent node
        parent->left = inLeft;
        parent->right = inRight;

        // Step 5 : Add children to the queue
        if (parent->left)
        {
            q.push(parent->left); // Push left child to the queue if it exists
        }

        if (parent->right)
        {
            q.push(parent->right); // Push right child to the queue if it exists
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
int count(Node *root)
{
    if (root == NULL)
        return 0;
    int left = count(root->left);
    int right = count(root->right);
    return left + right + 1;
}

int main()
{
    Node *root = input_tree();
    cout << count(root) << endl;

    return 0;
}
