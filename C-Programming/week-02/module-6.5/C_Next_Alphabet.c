#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);
    if (letter == 'z')
    {
        letter = 'a';
    }
    else
    {
        letter++;
    }

    printf("%c\n", letter);

    return 0;
}

// method-02
#include <stdio.h>

int main()
{
    char letter;
    scanf("%c", &letter);

    int ConvertedLetter = letter;
    int nextLetter;
    if (ConvertedLetter == 122)
    {
        nextLetter = 97;
    }
    else
    {
        nextLetter = ConvertedLetter + 1;
    }

    printf("%c", nextLetter);

    return 0;
}
