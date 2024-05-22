#include <bits/stdc++.h>

using namespace std;

int main()
{
    //* declare variable
    int *a = new int[3];
    int *b = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i]; // * copy the value of a for future use
    }

    // * delete the memory address of a
    delete[] a;

    // * assign new size of the array => a
    a = new int[5];

    // * copy the value from b array
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }

    // reset 2 values
    a[3] = 40;
    a[4] = 50;

    //* print the full array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // Delete the memory allocated for b and a
    delete[] b;
    delete[] a;
    return 0;
}
