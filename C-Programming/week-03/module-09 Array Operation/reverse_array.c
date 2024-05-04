#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    // * Reverse condition
    int i = 0, j = n - 1;
    while (i < j)
    {
        /* code */
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    // * Print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
