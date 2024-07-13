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

    return 0;
}
