#include <stdio.h>
int main()
{
    int num, factorial=1;
    printf("Enter a whole number: ");
    scanf("%d",&num);

    if(num<0) printf("Factorial of negative number doesn't exist.");

    else
    {
        for(int i=num; i>=1; i--)
        {
         factorial*=i;
        }
        printf("Factorial of %d is: %d\n", num, factorial);
    }
}