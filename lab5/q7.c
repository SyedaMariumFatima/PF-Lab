#include<stdio.h>
int main()
{   
   printf("enter 3 numbers:");
   int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a>b && a>c )? printf("%d is the largest", a): (b>c)? printf("%d is the largest", b): printf("%d is the largest", c);
}
