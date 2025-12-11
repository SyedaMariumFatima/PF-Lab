#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ptr;

    for (int i = 0; i < 10; i++)
    {
        free(ptr[i]);
    }
    return 0;
}