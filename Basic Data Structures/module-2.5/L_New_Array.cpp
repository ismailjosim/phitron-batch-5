#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) // O(N)
    {
        cin >> b[i];
    }

    vector<int> ans(b);
    ans.insert(ans.begin() + n, a.begin(), a.end());

    for (int i : ans)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
