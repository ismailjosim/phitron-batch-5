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

    // Print the last row
    for (int i = 0; i < col; i++)
    {
        printf("%d ", arr[row - 1][i]);
    }
    printf("\n");

    // Print the last column
    for (int i = 0; i < row; i++)
    {
        printf("%d ", arr[i][col - 1]);
    }
    printf("\n");

    return 0;
}
