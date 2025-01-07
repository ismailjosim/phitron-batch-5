#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;
bool vis[N];
vector<int> adj[N];
int parentArr[N];
bool ans;

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int parent = q.front();
        // cout << parent << endl;
        q.pop();
        for (int child : adj[parent])
        {
            // check cycle
            if (vis[child] && parentArr[parent] != child)
            {
                ans = true;
            }

            if (!vis[child])
            {
                vis[child] = true;
                parentArr[child] = parent;
                q.push(child);
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
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArr, -1, sizeof(parentArr));
    ans = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            bfs(i);
        }
    }

    if (ans)
    {
        cout << "Cycle Found!" << endl;
    }
    else
    {
        cout << "Not a cycle" << endl;
    }

    return 0;
}
