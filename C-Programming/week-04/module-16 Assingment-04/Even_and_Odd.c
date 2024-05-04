#include <stdio.h>

void odd_even(int *arr, int N)
{
    int even = 0, odd = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Iterate through the array and count even and odd numbers
    for (int i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    // Print the counts of even and odd numbers
    printf("%d %d\n", even, odd);
}

int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    odd_even(arr, N);

    return 0;
}
