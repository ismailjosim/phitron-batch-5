#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;

        scanf("%d %d %d", &M1, &M2, &D);

        int f = M1 + M2;

        int w = M1 * D;

        int n = w / f;

        int days = D - n;

        printf("%d\n", days);
    }
    return 0;
}
