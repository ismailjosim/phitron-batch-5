#include <stdio.h>

int main()
{
    int x, y;
    long long int z;
    scanf("%d %d %lld", &x, &y, &z);

    int a = 0;
    if (x < y && x < z)
    {
        a = x;
        y -= x;
        z -= x;
    }
    else if (y < x && y < z)
    {
        a = y;
        x -= y;
        z -= y;
    }
    else
    {
        a = z;
        x -= z;
        y -= z;
    }

    if (x > z)
    {
        a += x / 2;
    }

    printf("%d", a);

    return 0;
}
