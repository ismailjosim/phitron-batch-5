#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // main work
    for (int i = 0; i < n; i++)
    {
        // actual work
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", j + 1);
        }
        printf("\n");
    }

    return 0;
}
