#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a1(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    int m;
    cin >> m;
    vector<int> a2(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a2[i];
    }
    int p;
    cin >> p;

    vector<int> res;

    if (p == 0)
    {
        res.insert(res.end(), a2.begin(), a2.end());
        res.insert(res.end(), a1.begin(), a1.end());
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            res.push_back(a1[i]);
            if (i == p - 1)
            {
                res.insert(res.end(), a2.begin(), a2.end());
            }
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}
