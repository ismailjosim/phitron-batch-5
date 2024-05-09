#include <stdio.h>

// Function to count vowels in a string starting from index i
int count(char s[], int i)
{
    // Base case: when the program needs to stop
    if (s[i] == '\0')
    {
        return 0;
    }

    // Call the function recursively for the rest of the array from the next index
    int v = count(s, i + 1);

    // Convert the current character to lowercase
    // If it is an uppercase letter, adjust to lowercase using ASCII value
    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        s[i] = s[i] + 32;
    }

    // Check if the current character is a vowel (a, e, i, o, u)
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
    {
        return v + 1; // If it is a vowel, increment the count
    }
    else
    {
        return v; // If not, return the existing count
    }
}

int main()
{
    // Declare a character array to hold the input string
    char s[205];

    // Read the input string using fgets, which reads up to 204 characters or until newline
    fgets(s, sizeof(s), stdin);

    // Call the function count to count vowels starting from index 0
    int v = count(s, 0);

    // Print the number of vowels counted
    printf("%d\n", v);

    return 0; // Return 0 to indicate successful completion
}
