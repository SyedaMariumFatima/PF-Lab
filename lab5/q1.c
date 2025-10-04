#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);
    if(marks>=50)
    {
        if(marks>=85)printf("passed with distinction");
        else printf("passed");
    }
    else printf("failed");
    return 0;
}