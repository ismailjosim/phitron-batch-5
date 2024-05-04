#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int k = 1, z = n;

    for (int i = 0; i < n; i++)
    {
        // print space
        for (int j = z - 1; j > 0; j--)
        {
            printf(" ");
        }
        // print star
        for (int x = 0; x < k; x++)
        {
            printf("*");
        }
        z--;
        k += 2;
        printf("\n");
    }

    return 0;
}
