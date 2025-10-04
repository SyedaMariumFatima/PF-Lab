#include <stdio.h>
int main()
{
    int num;
    do{
       printf("enter number:");
       scanf("%d", &num);
    }
    while(num!=0);
    return 0;

}