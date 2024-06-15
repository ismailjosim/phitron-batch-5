#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* Declare the Vector:
    vector<string> sent;
    int n;
    string input;

    //* Input the Number of Strings:
    cin >> n;
    cin.ignore();

    // * Read the Strings into the Vector:

    for (int i = 0; i < n; i++)
    {
        getline(cin, input);
        sent.push_back(input);
    }

    for (auto str : sent)
    {
        cout << str << " ";
    }

    return 0;
}
