#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int x = 0; x < t; x++)
    {
        int n;
        scanf("%d", &n);

        char arr[100001];
        scanf("%s", arr);

        int tiger_count = 0;
        int pathan_count = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'T')
            {
                tiger_count++;
            }
            else if (arr[i] == 'P')
            {
                pathan_count++;
            }
        }

        if (tiger_count > pathan_count)
        {
            printf("Tiger\n");
        }
        else if (pathan_count > tiger_count)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}
