#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> tickets;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        else
            tickets.push_back(v);
    }

    int k;
    cin >> k;

    int time = 0;
    queue<pair<int, int>> q;

    for (int i = 0; i < tickets.size(); i++)
    {
        q.push({tickets[i], i});
    }

    while (!q.empty())
    {
        auto current = q.front();
        q.pop();

        if (current.first > 0)
        {
            current.first--;
            time++;

            if (current.first > 0)
            {
                q.push(current);
            }

            if (current.second == k && current.first == 0)
            {
                break;
            }
        }
    }

    cout << time << endl;

    return 0;
}
