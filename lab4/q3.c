#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter first number:");
    scanf("%i", &x);
    printf("enter second number:");
    scanf("%i", &y);
    printf("enter third number:");
    scanf("%i", &z);
    
    if(x>y)
    {
       if( x > z )
       {
        printf("%i is the largest number", x);
       }
       else
       {
        printf("%i is the largest number", z);
       } 
    }
    else if( y > z )
    {
        printf("%i is the largest number", y);
    }
    else
    {
        printf("%i is the largest number", z);
    }
}