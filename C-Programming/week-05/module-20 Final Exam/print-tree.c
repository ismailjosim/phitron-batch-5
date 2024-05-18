#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int line = (10 + n + 1) / 2;

    int space = line - 1, star = 1;
    for (int i = 0; i < line; i++)
    {
        // print line
        // space per line
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < star; j++)
        {
            printf("*");
        }

        // increase start value + 2 & decrease space -1
        space--;
        star += 2;

        // print new line
        printf("\n");
    }

    // print tree stem
    for (int i = 0; i < 5; i++)
    {
        // print line

        // print space 5 per line
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        // print star n times per line
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
