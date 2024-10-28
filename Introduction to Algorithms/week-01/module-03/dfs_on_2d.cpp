#include <bits/stdc++.h>

using namespace std;

// * Global Variable
char a[20][20];
bool vis[20][20]; // for visited src

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}}; // create a 4 size vector to store the value of fix 4 item

int r, c;

bool valid(int i, int j)
{
    if (i < 0 || i >= r || j < 0 || j >= c)
    {
        return false;
    }
    else
    {
        return true;
    }
}

// * dfs function
void dfs(int src_i, int src_j)
{

    // step 01: print src_i and src_j
    cout << src_i << " " << src_j << endl;

    // step 02: make visited == true of that item
    vis[src_i][src_j] = true;

    // step 03: find fix other 4 values
    for (int i = 0; i < 4; i++)
    {
        // get children i-th item
        int children_i = src_i + d[i].first;
        int children_j = src_j + d[i].second;

        if (valid(children_i, children_j) && !vis[children_i][children_j])
        {
            dfs(children_i, children_j);
        }
    }
};
int main()
{
    cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int src_i, src_j;
    cin >> src_i >> src_j;

    memset(vis, false, sizeof(vis));
    dfs(src_i, src_j);

    return 0;
}
