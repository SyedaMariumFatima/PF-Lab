#include <stdio.h>
int main()
{ 
    int i, num;
    printf("enter number:");
    scanf("%d", &num);
    for(i=1; i<=10; i++)
    {
        printf("%d\tx\t%d\t=\t%d\n", num, i, num*i);
    }
}