#include <bits/stdc++.h>

using namespace std;

int main()
{
    // * use this if you want to arrange the value in asc order
    // priority_queue<int> pq;

    //* use this if you want to get arrange the value in des order
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true)
    {
        int cmd;
        cin >> cmd;
        if (cmd == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        else if (cmd == 1)
        {
            pq.pop();
        }
        else if (cmd == 2)
        {
            cout << pq.top() << endl;
        }
        else
        {
            break;
        }
    }

    return 0;
}
