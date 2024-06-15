#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // * Access Last Element
    cout << v[v.size() - 1];

    // * easy method (R)
    cout << v.back();

    // * any specific element
    cout << v[0];

    // * first element
    cout << v.front();

    return 0;
}
