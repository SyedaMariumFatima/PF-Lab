#include<stdio.h>

float calculateTotal(float price[], int items)
{
	float sum=0;
	int i;
	for( i=0; i<items; i++)
	{
		sum+=price[i];
	}
return sum;	
}

float applyDiscount(float total)
{
	if (total>5000)
	{
		 total*=0.9;
        
	}
	
    return total;
}

void printBill(float bill)
{
	printf("your total bill is Rs.%f", bill);
}
int main()
{
	int items;
	printf("enter number of items: ");
	scanf("%d", &items);
	
	float price[items];
	int i;
	for(i=0; i<items; i++)
	{
		printf("enter price of item %d: ", i+1);
		scanf("%f", &price[i]);
	}
	
	float total=calculateTotal(price, items);
	printf("Your Total is Rs.%f", total);
	
	float afterdisc=applyDiscount(total);
	
	printBill(afterdisc);
	
}
