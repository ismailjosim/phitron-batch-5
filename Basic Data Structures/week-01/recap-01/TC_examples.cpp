#include <bits/stdc++.h>

using namespace std;

int main()
{
    // * Example 1: constant Time Complexity O(1)
    int a = 10;
    int b = 20;
    // int sub = a + b;
    // cout << sub << endl;

    // * Example 2: Linear Time Complexity O(n)
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Hello - " << i + 1 << endl;
    // }

    // * Example 3: Logarithmic Time Complexity (O(log n))
    // int x;
    // cin >> x;
    // while (x > 0)
    // {
    //     cout << x << endl;
    //     x = x / 2;
    // }
    // for (int i = 1; i < x; i = i * 2)
    // {
    //     cout << i << endl;
    // }
    // * Example 4: Quadratic Time Complexity O(n^2)
    // int x;
    // for (int i = 0; i < x; i++)
    // {
    //     for (int j = 0; j < x; j++)
    //     {
    //         cout << i << " " << j << endl;
    //     }
    // }
    //* Example 5: Linearithmic Time Complexity O(n log n)
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j = j * 2)
        {
            cout << i << " " << j << endl;
        }
    }

    return 0;
}
