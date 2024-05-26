#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    stringstream sent; // create string stream
    sent << s;         // transfer value from string to string stream

    string word;
    sent >> word; // extract one word from string stream
    cout << word;

    // loop through over string stream
    while (sent >> word)
    {
        cout << word << endl;
    };

    // result
    //* MyName ==> here MyName together because My is extract before while loop
    // is
    // ismail
    // josim

    return 0;
}
