#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", a);
    int lenCount = 0;
    int i = 0;
    while (a[i] != '\0')
    {
        /* code */
        lenCount++;
        i++;
    }
    // using for loop
    for (int i = 0; a[i] != '\0'; i++)
    {
        lenCount++;
    }
    printf("%d", lenCount);

    // we can easily count the length by using strlen package.
    int strLength = strlen(a);
    printf("%d\n", strLength);

    return 0;
}
