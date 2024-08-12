#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // prefix sum array
    long long pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    while (q--)
    {
        /* code */
        long long l, r;
        cin >> l >> r;
        l--;
        r--;
        long long total;
        if (l == 0)
        {
            total = pre[r];
        }
        else
        {
            total = pre[r] - pre[l - 1];
        }

        cout << total << endl;
    }

    return 0;
}
