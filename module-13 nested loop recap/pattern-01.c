#include <stdio.h>

int main()
{
    // step-01: declare variables and take input
    int n, k = 1;
    scanf("%d", &n);

    // step-02: run a loop and print "work" for "n" times
    for (int i = 0; i < n; i++)
    {
        // step-03: Define works
        for (int x = 0; x < k; x++)
        {
            printf("* ");
        }

        // step-04: add new ine after each work
        printf("\n");
        k++;
    }

    return 0;
}
