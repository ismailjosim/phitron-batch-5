#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        v.push_back(arr1[i]);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
