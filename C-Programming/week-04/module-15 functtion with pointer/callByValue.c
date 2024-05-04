#include <stdio.h>
void add(int value)
{
    value = 20;
    printf("Modified value: %d\n", value);
    printf("Modified Memory Address: %p\n", value);
}

int main()
{
    int originalValue = 10;
    add(originalValue);
    printf("Original value: %d\n", originalValue);
    printf("Original  Memory Address: %p\n", originalValue);
    return 0;
}
