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

    for (int i = 0; i < size; i++)
    {
        if (array[i] == array[i + 1])
        {
            for (int j = i + 1; j < size; j++)
            {
                array[j] = array[j + 1];
            }
            array[size - 1] = '_';
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %c", array[i]);
    }

    return 0;
}