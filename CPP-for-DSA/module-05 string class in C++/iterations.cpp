#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Programming";
    cin >> s;
    getline(cin, s);

    // using normal for-loop
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }

    // using string function: begin() and end()
    string::iterator it;
    for (it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    };

    // we can write it like loops
    for (string::iterator it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    // if your complier is version later 11 or latest the you can write like this:
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
