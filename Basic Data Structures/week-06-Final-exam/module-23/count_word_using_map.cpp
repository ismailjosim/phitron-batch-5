#include <bits/stdc++.h>

using namespace std;

int main()
{
    string sent;
    getline(cin, sent);
    stringstream ss(sent);

    map<string, int> mp;
    string word;
    while (ss >> word)
    {
        /* code */
        mp[word]++;
    };

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    };

    // * count a specific word;
    cout << mp["hash"] << endl;
    return 0;
}
