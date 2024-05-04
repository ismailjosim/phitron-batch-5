#include <stdio.h>

int add(int a, int b)
{
    return a * b;
}

int main()
{
    int value = add(3, 4);
    printf("%d", value);

    return 0;
}
