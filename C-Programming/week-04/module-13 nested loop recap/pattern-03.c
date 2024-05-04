#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int v = 1;
    for (int i = 0; i < n; i++)
    {
        // work
        for (int j = 1; j <= v; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        v++;
    }

    return 0;
}
