#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> a = {10, 20, 30, 40, 50};

    // delete single value
    a.erase(a.begin() + 1);

    // delete multiple values
    a.erase(a.begin(), a.end() - 2);

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    /*
     * for single value: vector.erase(pos)
     * for multiple values: vector.erase(start_pos, end_pos);
     */

    return 0;
}
