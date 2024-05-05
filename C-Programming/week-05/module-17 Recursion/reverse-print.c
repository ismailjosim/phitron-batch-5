#include <stdio.h>

void recursionFn(int i)
{
    // base cases
    if (i == 0)
        return;

    printf("%d\n", i);
    recursionFn(i - 1);
}

int main()
{
    recursionFn(5);
    return 0;
}
