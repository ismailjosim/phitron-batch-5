#include <stdio.h>

int main()
{
    int x[] = {10, 20, 30, 40, 50};
    int y[] = {60, 70, 80};

    int lenX = sizeof(x) / sizeof(x[0]);
    int lenY = sizeof(y) / sizeof(y[0]);

    int ans[lenX + lenY];

    for (int i = 0; i < lenX; i++)
    {
        ans[i] = x[i];
    }
    int i = lenX;
    for (int j = 0; j < lenY; j++)
    {
        ans[i] = y[j];
        i++;
    }

    for (int i = 0; i < lenX + lenY; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int m;
    scanf("%d", &m);
    int y[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &y[i]);
    }

    int output[n + m];
    for (int i = 0; i < n; i++)
    {
        output[i] = x[i];
    }
    int i = n;
    for (int j = 0; j < m; j++)
    {
        output[i] = y[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}
