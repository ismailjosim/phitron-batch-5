#include <bits/stdc++.h>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    list<int> items;
    while (true)
    {
        int i;
        cin >> i;
        if (i == -1)
        {
            break;
        }
        items.push_back(i);
    }
    items.sort();
    items.unique();

    for (int val : items)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
