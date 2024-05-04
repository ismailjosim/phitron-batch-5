#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 1 || n > 1000)
    {
        printf("Invalid input for N\n");
        return 1; // Exit with error
    }
    int a[n];
    // Take all input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // reverse an array
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
