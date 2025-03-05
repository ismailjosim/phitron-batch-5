#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    vector<int> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + arr[i];
    }
    int total_sum = prefix_sum[n - 1];
    for (int i = 0; i < n; i++)
    {
        if (prefix_sum[i] == total_sum - prefix_sum[i])
        {
            cout << i << " ";
        }
    }

    return 0;
}
