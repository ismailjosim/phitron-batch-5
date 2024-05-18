#include <stdio.h>

int main()
{
    int l;
    scanf("%d", &l);

    for (int x = 0; x < l; x++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        // copy a in b
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        // sort b array
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        // find absolute diff
        int c[n];
        for (int i = 0; i < n; i++)
        {
            int dif = a[i] - b[i];
            if (dif < 0)
            {
                dif = -dif;
            }
            c[i] = dif;
        }

        // print result
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }

        printf("\n");
    }

    return 0;
}
