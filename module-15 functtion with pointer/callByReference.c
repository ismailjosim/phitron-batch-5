#include <stdio.h>

void add(int *p)
{
    *p = 50;
}

int main()
{
    int x = 10;
    add(&x);

    printf("%d", x);

    return 0;
}
