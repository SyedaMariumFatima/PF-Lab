#include<stdio.h>

float calculateInterest(float rate, float time, float principle)
{
	return (rate*time*principle)/100;
}

float updateBalance(balance, interest)
{
	float balance+interest;
}


main()
{   //input data
	float rate, principle, time;
	printf("Enter principle: ");
	scanf("%f", &principle);
	printf("Enter rate: ");
	scanf("%f", &rate);
	printf("Enter timelength in years: ");
	scanf("%f", &time);
	
	//print interest
	float interest=calculateInterest(rate, time, principle);
	printf("your interest is Rs.%f\n\n", interest);
	
	//input and print balance
	int balance;
	printf("Enter your current balance: ");
	scanf("%f", &balance);
	printf("Your new balance is Rs.%f", updateBalance(balance, interest));
	
	return 0;
}
