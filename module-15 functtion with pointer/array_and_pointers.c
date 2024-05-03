#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    // array index memory address
    printf("0Th index Value: %d\n", arr[0]);
    printf("0Th index Value: %d\n", *arr);

    // find array next index value using pointers
    printf("1st Index Value: %d\n", arr[1]);
    printf("1st Index Value: %d\n", *(arr + 1));
    printf("1st Index Value: %d\n", *(arr + 2));
    printf("1st Index Value: %d\n", *(arr + 4));

    //  we can write arr[1] ==> *(arr + 1) / * (1+arr)

    //* if we write this: arr[1] it will then dereference the value and convert it BTS into this: *(ar + 1). Similarly if we write 2[arr] it will convert the value to this: *(ar + 2)

    // so it is proven that array itself is a pointer

    return 0;
}
