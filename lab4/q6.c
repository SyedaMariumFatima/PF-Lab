#include <stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%i", &age);
    if(age >=18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
}
