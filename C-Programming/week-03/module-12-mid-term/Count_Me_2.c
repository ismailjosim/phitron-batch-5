#include <stdio.h>
#include <string.h>
int main()
{
    char a[100001];
    scanf("%s", a);

    int cnt = 0;
    for (int i = 0; i < strlen(a); i++)
    {

        if (a[i] != 'a' && a[i] != 'e' && a[i] != 'i' && a[i] != 'o' && a[i] != 'u')
        {
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100001];
    scanf("%s", a);

    int cnt = 0;
    char vowels[] = "aeiou";

    for (int i = 0; i < strlen(a); i++)
    {
        if (!strchr(vowels, a[i]))
        {
            cnt++;
        }
    }

    printf("%d", cnt);
    return 0;
}

// * In this code, you create a string vowels that contains all the vowels.Then, inside the loop, use the strchr function to check if the current character is not in the vowels string.If the character is not found(i.e., strchr returns NULL), you increase the counter.This way, you can achieve the same result in a more concise manner.
