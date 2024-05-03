#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000001];
    scanf("%s", s);
    int output = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        output += s[i] - '0';
    }
    printf("%d", output);

    return 0;
}
