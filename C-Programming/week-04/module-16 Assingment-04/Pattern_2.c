// *  You will be given a positive integer N, you need to print a pattern shown below using this N.
#include <stdio.h>

int main()
{
    int n;
    // Read the integer input n
    scanf("%d", &n);

    int s = n;

    // Outer loop: Iterate through each line from 0 to n - 1
    for (int i = 0; i < n; i++)
    {

        // work print
        // print space
        for (int space = 0; space < n - i - 1; space++)
        {
            printf(" ");
        }

        // print number
        for (int j = i + 1; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
        s--;
    }

    return 0;
}
