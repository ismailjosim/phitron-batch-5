#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1, star = 1;
    for (int i = 0; i < (2 * n) - 1; i++)
    {
        // work

        // section: first half
        // print space and decrement the value - 1;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        // print star and increment the value + 2;
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        printf("\n");

        if (i < n - 1)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }
    }
    return 0;
}
