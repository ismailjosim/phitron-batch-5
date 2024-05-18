#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; t++)
    {
        long long int M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        // multiplication of 3 values
        long long int r = A * B * C;

        if (r == 0)
        {
            if (M == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
            continue;
        }

        if (M % r != 0)
        {
            printf("-1\n");
            continue;
        }

        long long v = M / r;

        if (A * B * C * v == M)
        {
            printf("%lld\n", v);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
