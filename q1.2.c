#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel (both cases)
int isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

void reverseVowels(char str[])
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right)
    {
        if (!isVowel(str[left]))
        {
            left++;
            continue;
        }
        if (!isVowel(str[right]))
        {
            right--;
            continue;
        }
        // Swap vowels
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

        reverseVowels(str);

    printf("String after reversing vowels: %s\n", str);

    return 0;
}
