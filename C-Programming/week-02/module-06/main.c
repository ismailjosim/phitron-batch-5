#include <stdio.h>

int main()
{
    // case i++
    int i = 10;
    int x = ++i;

    i++;
    printf("%d", i);

    // case ++i
    printf("%d", x);

    return 0;
}
