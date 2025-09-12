#include <stdio.h>
int main()
{
    printf("enter bill amount:");
    int bill;
    scanf("%i", &bill);
    if(bill>5000)
    {
        bill = bill*0.9;
        printf("You get a discount so your final bill is %i", bill);
    }
    else
    {
        printf("Your final bill is %i", bill);
    }
}   