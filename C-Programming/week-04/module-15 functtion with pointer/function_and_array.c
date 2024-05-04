#include <stdio.h>

void add(int ar[], int n) // with array int value
void add(int *ar, int n) // with pointers
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    int n = sizeof(ar) / sizeof(int);
    add(ar, n);

    return 0;
}

#include <stdio.h>

void sum(double *arr, int n)
{
    double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += arr[i];
    }
    printf("%0.21f\n", total);
}

int main()
{
    double arr[5] = {10.4,
                     15.99,
                     20.20,
                     14.30,
                     50.5};
    int n = sizeof(arr) / sizeof(int);
    sum(arr, n);
    return 0;
}
