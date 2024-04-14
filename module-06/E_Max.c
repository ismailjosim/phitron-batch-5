#include <stdio.h>

int main()
{
    int n, m, r = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)

    {

        scanf("%d", &m);
        if (m > r)
        {
            r = m;
        }
    }
    printf("%d\n", r);

    return 0;
}
