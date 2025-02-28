#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++) //* O(n)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    // sort the array
    sort(arr, arr + n); //* O(nLogN)

    while (q--) //* O(q)
    {
        int x;
        cin >> x;
        bool flag = false;
        // Linear Search
        // for (int i = 0; i < n; i++) //* O(n)
        // {
        //     if (arr[i] == x)
        //     {
        //         flag = true;
        //     }
        // }
        // binary search
        int l = 0, r = n - 1;
        while (l <= r) //* O(logN)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                flag = true;
                break;
            }

            if (x > arr[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (flag)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
