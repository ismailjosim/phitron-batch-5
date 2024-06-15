#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // * normal method
    vector<int>::iterator it;
    for (it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    //* shortcut method(it will automatically detect)
    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
