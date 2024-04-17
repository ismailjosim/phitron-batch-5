#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    // Take all input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] > 0)
        {
            x[i] = 1;
        }
        else if (x[i] < 0)
        {
            x[i] = 2;
        }
        else
        {
            x[i] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    return 0;
}
