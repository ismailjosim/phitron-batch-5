#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    bool found = false;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }

    cout << (found ? "YES" : "NO") << endl;

    return 0;
}
