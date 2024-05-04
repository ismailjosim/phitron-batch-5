#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Starting with k equal to n
    int k = n;
    // Outer loop for rows
    for (int i = 0; i < n; i++)
    {
        // Inner loop to print numbers from 1 to k
        for (int j = 1; j <= k; j++)
        {
            printf("%d ", j);
        }
        // Print a newline after each row
        printf("\n");
        // Decrease the value of k for the next iteration
        k--;
    }
    return 0;
}
