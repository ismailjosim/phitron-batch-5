#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int a = 10, b = 20;

    //* find minimum value using built-in function
    int result = min(a, b);

    //* find max
    int maximum = max(a, b);

    // * if we want to compare more than 2 value
    int mn = min({20, 30, 40, 10});
    int mx = max({20, 30, 40, 10});

    //* to swap values from one variable to another;
    int x = 100, y = 200;
    swap(x, y);

    return 0;
}
