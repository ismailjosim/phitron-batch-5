#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = 1, z = n;

    int y = 2 * n - 3, s = 1;

    // print forward star
    for (int i = 0; i < n; i++)
    {
        //   print space
        for (int j = z - 1; j > 0; j--)
        {
            printf(" ");
        }
        //  print star
        for (int x = 0; x < k; x++)
        {
            printf("x");
        }
        z--;
        k += 2;
        printf("\n");
    }

    // print backward start
    for (int i = 0; i < n - 1; i++)
    {

        // print space
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        // print star
        for (int j = 0; j < y; j++)
        {
            printf("x");
        }
        printf("\n");
        y = y - 2;
        s++;
    }

    return 0;
}
