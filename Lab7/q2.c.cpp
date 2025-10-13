#include<stdio.h>
int main()
{
	printf("enter 10 student marks:\n");
	int marks[12];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &marks[i]);
	}
	int total=0;
	for(int i=0; i<10 ; i++)
	{
		total+= marks[i];
	}
	int avg=total/10;
	printf("average is %d");
}
