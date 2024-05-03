#include <stdio.h>
#include <string.h>

int is_palindrome(char S[])
{
    int strLength = strlen(S);

    // Check if the string is a palindrome
    for (int i = 0; i < strLength / 2; i++)
    {
        if (S[i] != S[strLength - 1 - i])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    char S[1001];

    // Read the string input
    scanf("%s", S);

    int result = is_palindrome(S);

    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
