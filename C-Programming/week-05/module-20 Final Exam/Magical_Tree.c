

// //      *
// //     ***
// //    *****
// //   *******
// //  *********
// // ***********
// //      *
// //      *
// //      *
// //      *
// //      *
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n + 5 - 1, star = 1;
    int line = (5 + n + 5 + 1) / 2;
    for (int i = 0; i < line + 5; i++)
    {
        // work
        // print space and decrement the value - 1;
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        // print star and increment the value + 2;
        for (int j = 0; j < star; j++)
        {

            printf("*");
        }
        printf("\n");

        space--;
        star += 2;
    }
    return 0;
}
