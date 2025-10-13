
#include <stdio.h>

int main() 
{
    int arr[12];
    int size=12;
    // input array
    for(int i=0; i<12; i++)
    {
        printf("enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //input number to be removed
    int num;
    printf("enter number you want to remove: ");
    scanf("%d", &num);
    
    //removing number
    for(int i=12; i>0; i--)
    {
        if(arr[i]==num)
        {
           for(int j=i; j<=12; j++)
           {
               arr[j]=arr[j+1];
              
           }
              size--; //decreasing the size of array
        }
    }

   //printing array
    printf("array after removing %d:\n", num);
    for(int i=0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
