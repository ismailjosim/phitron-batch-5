#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string str, word;
        cin >> str >> word;

        while (str.find(word) != -1)
        {
            str.replace(str.find(word), word.size(), "#");
        }

        cout << str << endl;
    }

    return 0;
}
