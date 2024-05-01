#include <stdio.h>

int main()
{
    int x = 10;
    printf("%p\n", &x);

    // pointers
    int *p = &x;
    printf("%p\n", p);

    //* dereference : retrieve value from memory address(pointers)
    printf("%d\n", *p);

    //* Change value using memory address(pointers)
    *p = 500;
    printf("%d\n", x);
    printf("%p\n", *p);

    return 0;
}
