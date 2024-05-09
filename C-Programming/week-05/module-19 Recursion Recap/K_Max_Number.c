#include <stdio.h>
#include <limits.h> // For INT_MIN

// Function to find the maximum value in an array recursively
int findMax(int arr[], int n)
{
    // Base case: if we reach the start of the array, return the first element
    if (n == 0)
    {
        return arr[0];
    }

    // Recursively find the maximum value in the array up to the (n - 1)th index
    int res = findMax(arr, n - 1);

    // Compare the current element (arr[n]) with the result from the previous recursive call
    if (arr[n] > res)
    {
        return arr[n];
    }
    else
    {
        return res;
    }
}

int main()
{
    int n;

    // Read the size of the array
    scanf("%d", &n);
    int arr[n];

    // Read the elements of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Find the maximum value in the array
    int v = findMax(arr, n - 1);

    // Print the maximum value
    printf("%d\n", v);

    return 0;
}
