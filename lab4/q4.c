#include <stdio.h>
int main()
{
    int age , salary;
    printf("Enter your age:");
    scanf("%i", &age); 
    if( age >= 25)
    {
        printf("Enter your salary:");
        scanf("%i", &salary);
        if( salary >= 40000)
        {
            printf("You are eligible for loan");
        }
        else
        {
            printf("You are not eligible for loan");
        }
    }
    else
    {
        printf("You are not eligible for loan");
    }
}