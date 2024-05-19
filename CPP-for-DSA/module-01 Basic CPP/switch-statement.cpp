#include <iostream>

using namespace std;

int main()
{
    int choice;

    switch (choice)
    {
    case 1:
        cout << "You Selected Option 1." << endl;
        break;

    default:
        cout << "You didn't provide a valid choice" << endl;
        break;
    }

    return 0;
}
