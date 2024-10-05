#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;
        set<int> s;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (s.find(x) == s.end())
            {
                arr.push_back(x);
                s.insert(x);
            }
        }

        // Sort the array
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
