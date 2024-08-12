#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> x = {10, 20, 30, 40, 50};

    auto it = find(x.begin(), x.end(), 10);

    if (it == x.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    // * Find items index
    cout << it - x.begin();

    return 0;

    // * find(start_pos, end_pos, val)

    //* find return and iterator so we need to store that value into an iterator.
}
