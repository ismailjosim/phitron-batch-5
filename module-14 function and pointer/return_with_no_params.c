#include <stdio.h>

int sum()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    int res = sum();
    printf("%d", res);
    return 0;
}
