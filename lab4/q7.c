#include <stdio.h>
int main()
{
    int password;
    printf("enter password:");
    scanf("%i", &password);
    if( password == 1234)
    {
        printf("access granted");
    }
    else
    {
        printf("access denied");
    }
}