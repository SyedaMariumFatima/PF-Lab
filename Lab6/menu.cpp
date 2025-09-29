#include<stdio.h>

int main()
{
	int day;
	printf("enter Day:");
	scanf("%d", &day);
	switch(day)
	 {
		case 1 : 
		printf("your monday dinner is biryani.");
		 break;
		 
		case 2 :
		printf("your teusday dinner is sabzi") ;
		break;
		
		case 3:
		printf("your wednesday dinner is Aloo gosht");
		break;
		
		case 4:
			printf("your thursday dinner is KFC");
			break;
			
		case 5:
		    printf("your friday dinner is dal chawal");
		    break;
		    
		    
		case 6:
			printf("your Saturday dinner is Keema");
			break;
			
		case 7:
		    printf("your sunday dinner is spaghetti");
			break;
			
		default:
		   printf("not valid");	
	}
}
  
  
