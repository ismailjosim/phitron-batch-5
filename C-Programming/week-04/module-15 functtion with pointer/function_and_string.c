#include <stdio.h>
#include <string.h>

void add(char arr[])

{
    printf("%d", strlen(arr)); // 5

    // ? we don't need length in string.
}

int main()
{
    char arr[6] = "Hello";

    add(arr);

    return 0;
}
