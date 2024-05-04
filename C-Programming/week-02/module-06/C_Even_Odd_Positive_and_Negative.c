#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int Even = 0, Odd = 0, Positive = 0, Negative = 0;
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &a);
        if (a % 2 == 0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        if (a < 0)
        {
            Negative++;
        }
        else if (a > 0)
        {
            Positive++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", Even, Odd, Positive, Negative);

    return 0;
}
