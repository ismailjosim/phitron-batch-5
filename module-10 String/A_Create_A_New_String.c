#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001], t[1001];
    scanf("%s %s", &s, &t);
    int sLen = strlen(s);
    int tLen = strlen(t);
    printf("%d %d\n", sLen, tLen);
    printf("%s %s\n", s, t);
    return 0;
}
