#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    queue<string> q;

    while (t > 0)
    {
        int p;
        string name;
        cin >> p;

        if (p == 0)
        {
            cin >> name;
            q.push(name);
        }
        else if (p == 1)
        {
            if (q.empty())
            {
                cout << "Invalid" << endl;
            }
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }

        t--;
    }

    return 0;
}
