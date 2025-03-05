#include <bits/stdc++.h>

using namespace std;

vector<int> runningSum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> running_sum(n);
    running_sum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        running_sum[i] = running_sum[i - 1] + arr[i];
    }
    return running_sum;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    };
    vector<int> running_sum = runningSum(arr);
    for (int i = 0; i < n; i++)
    {
        cout << running_sum[i] << " ";
    }

    return 0;
}
