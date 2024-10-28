#include <bits/stdc++.h>
using namespace std;

// step 01: global variable
const int N = 1e5 + 5;
vector<int> v[N];
bool vis[N];

// step 03: create DFS recursion function
void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (!vis[child])
            dfs(child);
    }
};

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
    memset(vis, false, sizeof(vis));
    dfs(0);

    return 0;
}
