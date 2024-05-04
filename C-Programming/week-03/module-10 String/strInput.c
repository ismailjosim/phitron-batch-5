#include <stdio.h>

int main()
{
    // char a[5];
    // scanf("%s", a);
    //* here & means address of our variable. so in that case of string without & because the char of a it's has it's own &. using & or not is optional.

    char b[13];
    scanf("%s", &b); // ismail josim
    printf("%s\n", b);

    // * here even we give size of b[5] it will take full sting value. because in Windows machine it define extra memory allocation. but on others devices it will
    // ! print segmentation fault or runtime error. we will get that error when we run the code in online.

    return 0;
}
