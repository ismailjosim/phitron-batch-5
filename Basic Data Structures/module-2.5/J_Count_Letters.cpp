#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    int count[26] = {0};

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            int v = a[i] - 'a';
            count[v]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}
