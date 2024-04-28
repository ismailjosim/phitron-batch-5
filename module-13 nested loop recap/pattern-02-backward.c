#include <stdio.h>

int main()
{
    int n, y, s = 0;
    scanf("%d", &n);
    y = 2 * n - 1;
    for (int i = 0; i < n; i++)
    {

        // print space
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        // print star
        for (int j = y; j > 0; j--)
        {
            printf("X");
        }

        printf("\n");
        y = y - 2;
        s++;
    }

    return 0;
}
