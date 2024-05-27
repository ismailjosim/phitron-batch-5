#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s = "Welcome to our personal life";
    // * Loop for getting single char using normal loop
    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    //* same thing using range or shortcut loop
    for (char c : s)
    {
        cout << c << endl;
    }

    return 0;
}
