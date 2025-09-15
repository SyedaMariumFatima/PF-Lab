#include <stdio.h>
int main()
{
	char qualification[10];
	char result[10];
	printf("enter you qualification:");
	scanf("%s", qualification);
	
	if(strcmp(qualification, "MS")==0)
	{
	  printf("have you passed the interview?");
	  scanf("%s", result);
	  if (strcmp(result, "yes")==0)
	  {
	  	printf("congratulations you are hired!");
	  }	
	  else
	  {
	  	printf("you are not hired.");
	  }
	} 
}
