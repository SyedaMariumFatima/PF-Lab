#include<stdio.h>
int main()
{   
   printf("enter number:");
   int num;
   scanf("%d", &num);
   printf("Left shift: %d\n", num<<1);
   printf("Right shift: %d", num>>1);
}