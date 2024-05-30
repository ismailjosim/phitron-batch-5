#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int frq[26] = {};
    for (char c : s)
    {
        frq[c - 'a']++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        //* print only the value that is greater then 0
        if (frq[i - 'a'] != 0)
        {
            cout << i << " - " << frq[i - 'a'] << endl;
        }
    }
    for (char i = 'a'; i <= 'z'; i++)
    {

        //* sort the string
        for (int j = 0; j < frq[i - 'a']; j++)
        {
            cout << i;
        }
    }

    return 0;
}
