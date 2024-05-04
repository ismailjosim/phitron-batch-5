#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 2 || n > 1000)
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

    int lowest = a[0];
    int pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < lowest)
        {
            lowest = a[i];
            pos = i;
        }
    }
    printf("%d %d\n", lowest, pos + 1);

    return 0;
}
