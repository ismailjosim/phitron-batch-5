#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++) // O(Q)
    {

        int l, r;
        cin >> l >> r;
        int total = 0;
        for (int j = l - 1; j < r; j++) // O(N)
        {
            total += a[j];
        }
        cout << total << endl;
    }

    return 0;
}

//* when we run the code we will get Time limit exceeded. now let optimize the code:
