#include <stdio.h>
int main()
{
    int a, r;
    printf("enter a number:");
    scanf("%d", &a);

    for(int i=a/2; i>=2; i--)
    {
       r=a%i;
       if(r==0)
       {
          printf("not prime");
          return 0;
       }
            
    }
    printf("prime");
    return 0;
}