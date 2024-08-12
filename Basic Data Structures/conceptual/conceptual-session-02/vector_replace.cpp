#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    // take input
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int old_v, new_v;
    cin >> old_v >> new_v;

    replace(v.begin(), v.end(), old_v, new_v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;

    // replace(start_pos, end_pos, old_v, new_v);
}
