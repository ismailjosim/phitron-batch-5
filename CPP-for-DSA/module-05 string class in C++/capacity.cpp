#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* s.size() -> returns the size of the string.
    string s;
    cin >> s;
    cout << s.size() << endl;
    //* s.max_size() -> returns the maximum size that string can hold.
    cout << s.max_size() << endl; // 1073741823
    //* s.capacity() -> returns current available capacity of the string. will increase if string size if larger the default 15 size
    cout << s.capacity() << endl;

    //* s.clear() -> clear the string.
    cout << s << endl;
    s.clear();
    cout << s << endl;

    // s.empty() -> return true/false if the string is empty.
    if (!s.empty())
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    // s.resize() -> change the size of the string.
    string str = "Javascript";
    cout << "String is :" << str << endl;
    str.resize(4);
    cout << "After resizing, string is " << str;
    return 0;
}
