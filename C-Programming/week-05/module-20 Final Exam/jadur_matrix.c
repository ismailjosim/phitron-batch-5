#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // print the value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                if (arr[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // print the result
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

// final code for both of them:

#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            if (i == j && arr[i][j] != 1)
            {
                flag = 0;
            }

            if (i + j == row - 1 && arr[i][j] != 1)
            {
                flag = 0;
            }

            if (i != j && i + j != row - 1 && arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    // print the result
    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
