#include <stdio.h>

int main()
{
    char name[6] = {'I', 's', 'm', 'a', 'l'};

    // method one in string
    char nameStr[6] = "Ismail"; // we can store value in one quote for string

    for (int i = 0; i < 6; i++)
    {
        /* code */
        printf("%c ", name[i]);
    }

    return 0;
}
