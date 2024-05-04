#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int x[n];

    // Take all input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x[i]);
    }

    long long int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += x[i];
    }
    printf("%lld\n", llabs(s));

    return 0;
}
