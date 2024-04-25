#include <stdio.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        // take input for each loop
        char s[10001];
        scanf("%s", s);

        int cap = 0, sm = 0, dgt = 0;
        // loop over the string
        for (int i = 0; s[i] != '\0'; i++)
        {
            int character = s[i];

            if (character >= 'A' && character <= 'Z')
            {
                cap++;
            }
            else if (character >= 'a' && character <= "z")
            {
                sm++;
            }
            else if (character >= 48 && character <= 57)
            {
                dgt++;
            }
        }
        printf("%d %d %d\n", cap, sm, dgt);
    }

    return 0;
}
