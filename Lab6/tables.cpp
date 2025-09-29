#include <stdio.h>
int main()
{
   int n, i;
   printf("Enter number:");
   scanf("%d", &n);
   for (i=1;i<=n; i++)
   {
     printf("%d\tx\t%d\t=\t%d\n", n, i, i*n);
   }
   return 0;
}
