#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> list1 = {10, 20, 30, 40, 50};
    // cout << list1.max_size();

    // clear for clear list
    // list1.clear();
    // cout << list1.size() << endl;

    // resize: we can resize the list
    list1.resize(3);

    // iteration
    for (int v : list1)
    {
        cout << v << endl;
    }

    return 0;
}
