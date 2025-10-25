#include<stdio.h>
int main()
{
    int k;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            printf("%c ", 65+k);
            k++;
        }
        printf("\n");
    }
}