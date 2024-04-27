#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k = n;
    for (int i = n; i >= 0; i--)
    {
        for (int x = 0; x < k; x++)
        {
            printf("* ");
        }
        printf("\n");
        k--;
    }
    return 0;
}
