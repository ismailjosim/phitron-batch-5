#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;

    //* using c programming
    while (scanf("%d %d", &a, &b) != EOF)
    {
        /* code */
        printf("%d %d\n", a, b);
    }

    //* using c++
    while (cin >> a >> b) // we don't need to write EOF here
    {
        /* code */
        cout << a << " " << b << endl;
    }

    return 0;
}
