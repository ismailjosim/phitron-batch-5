#include <stdio.h>
int fun(char a[], int i)
{
    if (a[i] == '\0') // base case

        return 0;
    int len = fun(a, i + 1);
    return len + 1;
}

int main()
{
    char a[6] = "Hello";
    int len = fun(a, 0);
    printf("%d", len);

    return 0;
}
