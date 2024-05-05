#include <stdio.h>

int main()
{
    // step-01: initialization of the array
    int arr[2][3]; // array-name[row][column]

    // step-02: take input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Optional Step: change a specific array index
    arr[1][0] = 40;
    arr[1][1] = 50;
    arr[1][2] = 60;

    // step-03: Print out the 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("ARRAY[%d]row [%d]column = %d, ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
