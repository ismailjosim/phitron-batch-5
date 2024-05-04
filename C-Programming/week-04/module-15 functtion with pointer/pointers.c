#include <stdio.h>

int main()
{
    int x = 10;
    // printf("%p\n", &x);

    // pointers
    int *p = &x;
    // printf("%p\n", p);

    //* dereference : retrieve value from memory address(pointers)
    // printf("%d\n", *p);

    //* Change value using memory address(pointers)
    *p = 500;
    // printf("%d\n", x);
    // printf("%p\n", *p);

    // with double data-types
    double y = 5.55;
    double *ptr = &y;

    printf("%0.2lf\n", y);
    printf("%0.2lf\n", *ptr);
    printf("Y memory reference: %p\n", ptr);
    *ptr = 10.20;
    printf("%0.2lf\n", *ptr);
    printf("Y memory reference: %p\n", ptr);

    return 0;
}
