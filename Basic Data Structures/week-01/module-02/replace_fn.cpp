#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1, 2, 2, 3, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 8};

    //* eta vector er kono function na eta bairer function tai er age vector er name dewa lagbe na

    replace(v.begin(), v.end() - 1, 5, 100);
    // * last 8 number bade baki sob gula replace kore dibe

    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
