#include<stdio.h>
int main()
{
    int age; char gender;
    printf("enter age:");
    scanf("%d", &age);

    if(age<18)
    {
        printf("minor!");
    }    
    else
    {
        printf("specify your gender (m/f):");
        scanf(" %c", &gender);
        if(gender == 'm')
            printf("You are an adult male.\n");
        else if(gender == 'f')
            printf("You are an adult female.\n");
        else
            printf("Invalid gender input.\n");
    }
}