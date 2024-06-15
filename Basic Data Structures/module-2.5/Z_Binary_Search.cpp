#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    // it shows time limit exceeded
    // vector<int> arr(n);

    unordered_set<int> arr;
    for (int j = 0; j < n; j++)
    {
        // cin >> arr[j];
        int num;
        cin >> num;
        arr.insert(num);
    }

    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        auto it = find(arr.begin(), arr.end(), x);

        // check if the value is includes or not
        if (arr.find(x) == arr.end())
            cout << "not found" << endl;
        else
            cout << "found" << endl;
    }

    return 0;
}
