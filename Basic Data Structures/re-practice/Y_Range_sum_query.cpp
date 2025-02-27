#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int pre[n];
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    // pre[i] stores the sum of the first i elements of the array a (0-based indexing)
    // pre[0] = a[0]
    // sum of the first 1 elements
    // pre[1] = a[0] + a[1]
    // sum of the first 2 elements
    // pre[2] = a[0] + a[1] + a[2]
    // sum of the first 3 elements
    // and so on

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int sum = 0;
        if (l == 0)
        {
            sum = pre[r];
        }
        else
        {
            sum = pre[r] - pre[l - 1];
        }

        cout << sum << endl;
    }

    return 0;
}
