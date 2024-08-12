#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = find(a.begin(), a.end(), a[i] + 1);
        if (it != a.end())
        {
            count++;
        }
    }
    cout << count;

    return 0;
}

//* array elements er modde tar porer element ta ase kina seta check korte hobe. jodi thake tahole cout+1 kore dite hobe.

// example: a[i] = 4 porer value ta holo 4+1 = 5 ei 4 jodi array modde thake tahole count +1 kore dite hobe.

// 4 4 5

// i = 4 => next 4+1 = 5. find() 5 in array = +1;
