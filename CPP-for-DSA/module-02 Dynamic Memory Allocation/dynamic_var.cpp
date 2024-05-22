// #include <iostream>

// using namespace std;

// int main()
// {

//     // * we will create dynamic memory using "new" keyword
//     int *num = new int;
//     *num = 100; // it will return something like this: 0x7d9cd8 which is a memory address.
//     // to get the value we have dereference the value
//     cout << *num << endl;

//     return 0;
// }

// section: return function
#include <iostream>

using namespace std;
int *fun()
{
    int *a = new int;
    *a = 500;
    return a;
}

int main()
{
    cout << *fun() << endl;
    return 0;
}
