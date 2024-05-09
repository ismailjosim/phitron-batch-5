#include <stdio.h>

// Function to calculate factorial recursively
long long int count(int n)
{
    // Base case: when n is 0 or 1, return 1 (because 0! = 1 and 1! = 1)
    if (n == 0 || n == 1)
    {
        return 1;
    }

    long long int r = count(n - 1);

    return r * n;
}

int main()
{
    int n;

    // Read an integer value from the user
    scanf("%d", &n);

    // Calculate factorial using count function
    long long int result = count(n);

    // Print the result using printf
    printf("%lld\n", result);

    return 0;
}
