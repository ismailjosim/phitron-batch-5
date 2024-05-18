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
                if (i + j == row - 1)
                {
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
        printf("Secondary Diagonal\n");
    }
    else
    {
        printf("Not Diagonal\n");
    }

    return 0;
}
