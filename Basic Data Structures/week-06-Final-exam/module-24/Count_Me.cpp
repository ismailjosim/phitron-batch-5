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
        string max_word = "";
        int max_count = 0;
        while (ss >> word)
        {
            mp[word]++;

            if (mp[word] > max_count)
            {
                max_word = word;
                max_count = mp[word];
            }
        }

        cout << max_word << " " << max_count << endl;
    }

    return 0;
}
