#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c[100001];
    while (cin.getline(c, 100001))
    {

        int len = strlen(c);
        sort(c, c + len);

        for (int i = 0; i < len; i++)
        {
            if (c[i] != ' ')
            {
                cout << c[i];
            }
        }
        cout << endl;
    }

    return 0;
}

// solution: 02 using string method: begin() and end()

#include <bits/stdc++.h>

using namespace std;

int main()
{

    string line;
    while (getline(cin, line))
    {
        sort(line.begin(), line.end());

        for (char c : line)
        {
            if (c != ' ')
            {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
