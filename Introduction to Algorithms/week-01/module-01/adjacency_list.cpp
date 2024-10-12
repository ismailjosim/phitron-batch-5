#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    vector<int> mat[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        mat[a].push_back(b);
        mat[b].push_back(a);
    }

    // * print array 3rd index vector value
    // for (int i = 0; i < mat[3].size(); i++)
    // {
    //     cout << mat[3][i] << " ";
    // }

    // * short method
    for (int x : mat[0])
    {
        cout << x << " ";
    }

    return 0;
}
