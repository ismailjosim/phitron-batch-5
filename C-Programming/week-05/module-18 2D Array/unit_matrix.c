#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag = 1;

    if (row == col)
    {
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                // check primary/secondary corner has the same value for example: 1 or 2 each
                if (i == j)
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 0;
                    }
                    continue;
                }
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("Unit Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}
