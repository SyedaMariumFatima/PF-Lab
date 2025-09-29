#include <stdio.h>
#include <string.h>
int main()
{
	char userDbName[20]= "admin";
	char userDbPassword[20]= "1234";
	int loggedIn=0;
	
	char userName[10];
	char password[10];
	do{
		printf("enter your name:");
		scanf("%s", userName);
		printf("enter your paasword:");
		scanf("%s", password);
		if(strcmp(userDbName, userName)==0 && strcmp(userDbPassword, password)==0)
		  {
		  	printf("login successful!");
		  	loggedIn=1;
		  }
		else
		   {
		   	printf("invalid credentials!");
			 }  
	}
	while(!loggedIn);
}
