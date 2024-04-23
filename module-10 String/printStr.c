#include <stdio.h>

int main()
{
    char nameStr[6] = "Ismail";

    printf("%s", nameStr); // Ismail�

    //* it take garbage value when input to prevent this:

    //* 1. increase length + 1 and add null (\0) after the string
    char nameStrNullM[7] = "Ismail\0";
    printf("%s", nameStrNullM); // josim
    //* 2. just inc length + 1 without adding null value it will add automatically
    char nameStrNullA[6] = "josim";
    printf("%s", nameStrNullA); // josim
    return 0;
}
