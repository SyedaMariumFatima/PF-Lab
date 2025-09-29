#include <stdio.h>
int main()
{
	int n, i=1;
	printf("Enter number:");
	scanf("%d", &n);
	while(i<=n)
	{
		printf("%d\tx\t%d\t=\t%d\n", n, i, i*n );
		i++;
	}
}
