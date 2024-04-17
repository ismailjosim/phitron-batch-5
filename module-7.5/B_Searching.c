#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x[n];

    // Take all input for array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int target;
    scanf("%d", &target);

    int found = -1;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == target)
        {
            found = i;
            break;
        }
    }

    printf("%d\n", found);

    return 0;
}
