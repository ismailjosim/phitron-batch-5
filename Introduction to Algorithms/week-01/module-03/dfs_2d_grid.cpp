#include <bits/stdc++.h>
using namespace std;

// Global variables for the character 2D array and the visited tracking array
char a[20][20];
bool vis[20][20];

// Movement directions for DFS (right, left, up, down)
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// 2D array dimensions
int n, m;

// Validity check function to ensure the cell is within bounds and not visited
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

// DFS function for depth-first traversal
void dfs(int si, int sj)
{
    // Print current cell coordinates
    cout << si << " " << sj << endl;

    // Mark the current cell as visited
    vis[si][sj] = true;

    // Move in each of the 4 possible directions
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        // Perform DFS on the next cell if it is valid and unvisited
        if (valid(ci, cj) && !vis[ci][cj])
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    // Read grid dimensions
    cin >> n >> m;

    // Read the grid data
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    // Starting position for DFS
    int si, sj;
    cin >> si >> sj;

    // Initialize the visited array to false for all cells
    memset(vis, false, sizeof(vis));

    // Start DFS from the specified starting cell
    dfs(si, sj);

    return 0;
}
