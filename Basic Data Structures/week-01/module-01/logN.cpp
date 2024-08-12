#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    //*  O(N) TC
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << i << endl;
    // }

    // for (int i = 0; i < n; i += 2) // * also O(N)
    // {
    // }

    //* O(logN)
    // while (n > 0)
    // {
    //     int digit = n / 10;
    //     cout << digit << endl;
    //     n /= 10;
    // }

    for (int i = 1; i <= n; i = i += 2) //* O(N)
    {
        cout << i << endl;
    }
    for (int i = 1; i <= n; i = i * 2) //* O(logN)
    {
        cout << i << endl;
    }

    return 0;
}
