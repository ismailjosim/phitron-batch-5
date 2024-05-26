#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << x << endl;
    string s;
    // take input with space/ take full sentence input
    // cin >> s; // it will input only the first word

    // if input has int value before it will show error. so for that we will use this line of code to ignore the next input or enter keyword

    cin.ignore();
    // or
    getchar();
    getline(cin, s);
    cout << s << endl;

    return 0;
}
