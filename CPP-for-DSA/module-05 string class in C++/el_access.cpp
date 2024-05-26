#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    //* S[i] -> access the ith index of the string.
    cout << s[2] << endl; // recommended

    //* s.at(i) -> access the ith index of the string.
    cout << s.at(2) << endl;

    //* s.back() -> access the last element of the string.
    cout << s.back() << endl;

    // arr method
    cout << s[s, s.size() - 1] << endl;

    //* s.front() -> access the first element of the string.
    cout << s.front() << endl;

    return 0;
}
