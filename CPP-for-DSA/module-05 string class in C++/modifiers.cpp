#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    //* s+= -> append another string. (R)
    a += b; // if you don't want to add anything;
    a = a + " " + b;

    //* s.append() -> append another string.
    a.append(b);

    //* push_back() -> add character to the last of the string.
    a.push_back('h'); //! not recommended

    // s.pop_back() -> remove the last character of the string.
    a.pop_back();

    // s= -> assign string.
    // s.assign() -> assign string.
    string greeting;
    greeting = "Hello, ";
    greeting.assign("Good Morning, ");
    // cout << greeting + a << endl;

    // s.erase() -> erase characters from the string.
    greeting.erase(4, 1);
    greeting.erase(4); // delete from 4 to rest of the data

    // s.replace() -> replace a portion of the string.
    greeting.replace(4, 2, "Evening/");
    greeting.replace(4, 0, "Evening/");

    // s.insert() -> insert a portion to a specific position.
    greeting.insert(4, "Evening");

    return 0;
}
