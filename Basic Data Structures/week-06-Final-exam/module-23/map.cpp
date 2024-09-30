#include <bits/stdc++.h>

using namespace std;

int main()
{
    map<string, int> mp;
    // * insert method 01
    mp.insert({"ismail", 100});
    mp.insert({"josim", 50});
    mp.insert({"rahim", 120});

    // * insert method 02
    mp["sk"] = 200;

    // * iteration
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    // * find value using key
    // cout << mp["sk"] << endl;

    // * check if the value is exist or not

    if (mp.count("sk"))
    {
        cout << "Exist" << endl;
    }
    else
    {
        cout << "not Exist" << endl;
    }

    return 0;
}
