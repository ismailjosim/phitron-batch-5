#include <bits/stdc++.h>

using namespace std;

void print_forward(list<int> lists)
{
    // print out
    cout << "L -> ";
    for (auto it = lists.begin(); it != lists.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void print_backward(list<int> lists)
{
    // Print out
    cout << "R -> ";
    auto it = lists.end();
    while (it != lists.begin())
    {
        it--;
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    list<int> lists;
    int t;
    cin >> t;
    while (t > 0)
    {
        int p, v;
        cin >> p >> v;
        if (p == 0)
        {
            lists.push_front(v);
        }
        else if (p == 1)
        {
            lists.push_back(v);
        }
        else if (p == 2)
        {
            if (v >= 0 && v < lists.size())
            {
                auto it = next(lists.begin(), v);
                lists.erase(it);
            }
        }
        print_forward(lists);
        print_backward(lists);
        t--;
    }

    return 0;
}
