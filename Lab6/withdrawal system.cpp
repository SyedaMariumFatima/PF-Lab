#include <stdio.h>
int main()
{
	int withdraw, balance=10000;
	printf("enter amount:");
	scanf("%d", &withdraw);
	while(withdraw>balance)
	{
		printf("insufficient balance! try again:");
		scanf("%d", &withdraw);
	}
	balance-=withdraw;
	printf("successful transaction! your remaining balance is %d", balance);
}
