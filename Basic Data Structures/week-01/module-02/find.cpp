#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 8};

    // vector<int>::iterator it;
    auto it = find(v.begin(), v.end(), 100);

    cout << *it << " = ";
    if (it == v.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}
