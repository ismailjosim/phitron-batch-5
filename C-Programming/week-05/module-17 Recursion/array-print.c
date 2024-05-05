#include <stdio.h>
void fun(int arr[], int n, int i)
{
    if (i == n)
        return;
    printf("%d\n", arr[i]);
    fun(arr, n, i + 1);
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    fun(arr, 5, 0);
    return 0;
}
