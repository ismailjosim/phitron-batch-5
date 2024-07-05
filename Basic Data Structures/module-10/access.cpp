#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> list1 = {10, 20, 30, 40, 50};

    // * access head, tail,pos
    cout << list1.front() << endl;
    cout << list1.back() << endl;
    cout << *next(list1.begin(), 3) << endl;
    return 0;
}
