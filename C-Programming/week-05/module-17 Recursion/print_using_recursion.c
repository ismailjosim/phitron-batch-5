#include <stdio.h>

void printVal(int i)
{
    if (i == 6) // Stop the function to called itself.
    {
        return;
    }
    else
    {
        printf("%d\n", i);
        printVal(i + 1);
    }
}

int main()
{
    printVal(1);
    return 0;
}
