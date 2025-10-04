#include <stdio.h>
int main()
{
    int i, sum=0;
    for(i=1; i<=100; i++)
    {
       sum+=i;
    }
    printf("Sum of first 100 natural numbers is: %d\n", sum);
}