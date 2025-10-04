#include <stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d", &num);
    if(num&1)
        printf("odd");
    else
        printf("even");
}