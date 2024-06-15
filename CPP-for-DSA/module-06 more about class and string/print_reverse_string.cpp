#include <bits/stdc++.h>

using namespace std;

// reverse function
void func(stringstream &ss)
{
    char word;
    if (ss >> word)
    {
        func(ss);
        cout << ss << endl;
    }
}

int main()
{
    stringstream ss = "welcome to our group";
    func(ss);
    return 0;
}

// * Print string in reverse order using recursive function
