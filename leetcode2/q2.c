#include <stdio.h>

int main()
{
    long int size;
    printf("Enter size");
    scanf("%ld", &size);
    char array[size];
    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &array[i]);
    }

    char temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf(" %c", array[i]);
    }
    return 0;
}