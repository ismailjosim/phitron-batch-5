#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int search_v;
    cin >> search_v;

    // * left right value
    int left = 0;
    int right = n - 1;
    bool flag = false;

    // * run while loop until left <= r
    while (left <= right)
    {
        /* code */
        int mid_idx = (left + right) / 2;
        if (a[mid_idx] == search_v)
        {
            flag = true;
            break;
        }
        if (search_v > a[mid_idx])
        {
            // * Go Right
            left = mid_idx + 1;
        }
        else
        {
            // * Go Right
            right = mid_idx - 1;
        }
    }
    // * check flag
    if (flag == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
