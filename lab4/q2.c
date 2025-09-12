#include <stdio.h>
int main()
{
    printf("enter your age:");
    int age;
    scanf("5i", age);
    if (age<12 && age>0)
    {
        printf("Pay 200");
    }
    else if(age>=12 && age<18)
    {
        printf("Pay 300");
    }
    else if(age>=18 && age<60)
    {
        printf("Pay 500");
    }
    else
    {
        printf("Pay 250");
    }
}