#include <stdio.h>
#include <limits.h>

int findMax(int arr[], int n, int i)
{
    // base case
    if (i == n)
    {
        return INT_MIN;
    }

    // call the recursion function
    int r = findMax(arr, n, i + 1);

    // logic for the first value
    if (arr[i] > r)
    {
        return arr[i];
    }
    else
    {
        return r;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int r = findMax(arr, n, 0);
    printf("%d", r);

    return 0;
}
