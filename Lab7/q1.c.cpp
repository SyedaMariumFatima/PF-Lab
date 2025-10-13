#include<stdio.h>
int main()
{
	printf("enter 12 employee IDs:\n");
	int id[12];
	for(int i=0; i<12; i++)
	{
		scanf("%d", &id[i]);
	}
	
	printf("enter employee id to check");
	int check;
	scanf("%d", &check);
	
	for(int i=0; i<12; i++)
	{
		if(check==id[i])
		{
			printf("id is valid");
			return 0;
		}
	}
	printf("id not valid");
}
