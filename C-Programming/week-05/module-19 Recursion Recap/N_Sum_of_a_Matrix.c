#include <stdio.h>

int main()
{
    // step-01: initialization stage (variables)
    int row, col;
    scanf("%d %d", &row, &col);
    int arr1[row][col], arr2[row][col];

    // step-02: take input (array-01)
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    // step-02: take input (array-02)
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    // step-03: create new array to collection the total sum of arr1 and arr2 value
    int res[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // step-04: Print the result array
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
