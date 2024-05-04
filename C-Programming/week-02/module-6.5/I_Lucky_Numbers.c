#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N >= 10 || N <= 99)
    {
        int first = N / 10;
        int second = N % 10;

        if (first % second == 0 || second % first == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
