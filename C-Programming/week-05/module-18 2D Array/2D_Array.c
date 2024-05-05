#include <stdio.h>

int main()
{
    // Step-01: Declare a 2D array with 5 rows and 4 columns
    int array[5][4];

    // step-02: Initialize the 2D array with some values (optional)
    int initialValues[5][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 10, 10, 20},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    // Copy the initial values into the array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = initialValues[i][j];
        }
    }

    // Print the 2D array
    printf("The 2D array is:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0; // Indicate successful execution
}
