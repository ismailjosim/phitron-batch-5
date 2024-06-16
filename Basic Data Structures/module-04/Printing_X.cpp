#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    /* Note:
     1. print line:
        * each line contain / space \
        * print x middle of the pattern
     */

    for (int i = 0; i < n; i++)
    {
        //* লাইন প্রিন্ট
        for (int j = 0; j < n; j++)
        {
            //* যদি i এর মান j == হয় এবং  n - j - 1 তাহলে সেটা ম্যাট্রিক্সের সেন্টার এবং X print হবে
            if (i == j && i == n - j - 1)
            {
                cout << "X";
            }
            else if (j == i)
            {
                cout << "\\";
            }
            else if (j == n - i - 1)
            {
                cout << "/";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
