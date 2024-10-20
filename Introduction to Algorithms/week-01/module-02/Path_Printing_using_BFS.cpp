#include <bits/stdc++.h>

using namespace std;

vector<int> v[1005];
bool vis[1005];
int lvl[1005];

// track parent
int parentArr[1005];

// bfs function
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    lvl[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                lvl[child] = lvl[par] + 1;

                // tracking parent
                parentArr[child] = par;
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src, dest;
    cin >> src >> dest;
    memset(vis, false, sizeof(vis));
    memset(lvl, -1, sizeof(lvl));
    memset(parentArr, -1, sizeof(parentArr));
    bfs(src);

    int x = dest;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = parentArr[x];
    }

    reverse(path.begin(), path.end());

    for (int val : path)
    {
        cout << val << " ";
    }

    return 0;
}
