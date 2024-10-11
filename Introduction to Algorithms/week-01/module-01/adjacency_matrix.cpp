#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;

    int mat[n][n];
    memset(mat, 0, sizeof(mat));

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a][b] = 1;
        mat[b][a] = 1; //* directed graph ei part ta add hobe na.
    }

    //* Print value
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    //* check connection
    if (mat[1][4] == 1)
        cout << "Connected" << endl;
    else
        cout << "Not Connected" << endl;

    return 0;
}
