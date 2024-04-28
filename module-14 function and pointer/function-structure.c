#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}

void printMessage()
{
    printf("Hello, this is a message from the function.\n");
}
int main()
{
    int result = add(3, 5);
    printMessage();
    printf("%d", result);

    return 0;
}
