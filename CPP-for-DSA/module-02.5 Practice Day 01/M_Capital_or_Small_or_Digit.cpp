#include <iostream>
#include <cctype> // for character type functions (isdigit, isalpha, isupper).
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (isdigit(x))
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;

        if (isupper(x))
        {
            cout << "IS CAPITAL" << endl;
        }
        else
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}
