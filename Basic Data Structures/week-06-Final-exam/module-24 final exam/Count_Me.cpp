#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        string sent;
        getline(cin, sent);

        stringstream ss(sent);

        map<string, int> mp;
        string word;

        while (ss >> word)
        {
            mp[word]++;
        }
        string mx;
        int mx_count = 0;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << it->second << endl;
        };
    }

    return 0;
}
