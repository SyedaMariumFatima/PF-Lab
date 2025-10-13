#include<stdio.h>
int main()
{
	int parAges[10];

	int i;
	for(i=0; i<10; i++)
	{
		printf("\nenter participants age:");
		scanf("%d", &parAges[i]);
	}
	
	int young=parAges[0];
		for(int i=0; i<10; i++)
	{
	   if(parAges[i]<young)
	   {
	   	young=parAges[i];
	   }
	}
	printf("youngest participant is %d years old.", young);
	
}
