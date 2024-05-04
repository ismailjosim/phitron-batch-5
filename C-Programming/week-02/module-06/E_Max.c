// #include <stdio.h>

// int main()
// {
//     int n, m, r = 0;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)

//     {

//         scanf("%d", &m);
//         if (m > r)
//         {
//             r = m;
//         }
//     }
//     printf("%d\n", r);

//     return 0;
// }

// find minimum value
#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, max = INT_MIN, min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d\n", min);

    return 0;
}
