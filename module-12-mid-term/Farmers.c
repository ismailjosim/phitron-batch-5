#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        int M1, M2, D;

        scanf("%d %d %d", &M1, &M2, &D);

        //* total farmer after new farmers come
        int f = M1 + M2;

        // * total working time needed
        int w = M1 * D;

        // * Time needed for after new worker come
        int n = w / f;

        // * Rest Time
        int days = D - n;

        printf("%d\n", days);
    }
    return 0;
}
