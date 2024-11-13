#include <bits/stdc++.h>

using namespace std;

// Global variables
char a[20][20];
bool vis[20][20];
int dist[20][20];

// Movement directions for BFS (right, left, up, down)
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// 2D array dimensions
int n, m;

// Validity check function to ensure the cell is within bounds and not visited
bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#' && !vis[i][j]);
}

void bfs(int sri, int srj)
{
    queue<pair<int, int>> q;
    q.push({sri, srj});
    vis[sri][srj] = true;
    dist[sri][srj] = 0;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int first = par.first;
        int second = par.second;
        cout << first << " " << second << " - Distance: " << dist[first][second] << endl;

        // Move in each of the 4 possible directions
        for (int i = 0; i < 4; i++)
        {
            int ci = first + d[i].first;
            int cj = second + d[i].second;

            // Perform BFS on the next cell if it is valid and unvisited
            if (valid(ci, cj))
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dist[ci][cj] = dist[first][second] + 1;
            }
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

    // Starting position for BFS
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));

    bfs(si, sj);
    cout << dist[2][3] << endl;

    return 0;
}
