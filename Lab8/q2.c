#include<stdio.h>
int main()
{
    //input set of numbers into a 2D array 
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[2][n];
    for(int i=0; i<2; i++)
    {
        printf("Enter elements of set %d:\n ", i+1);
        for(int j=0; j<n; j++)
        {
            printf("Enter element %d: ", j+1);
            scanf("%d", &arr[i][j]);
        }
     } 

     int common[n];
     int k=0;
     for(int i=0; i<n; i++)
     {
        for(int j=0; j<n ; j++)
        {
            if(arr[0][i]==arr[1][j])
            {
                if(k==0)
                {   
                    //no need to check uniqueness for 1st element
                    common[k]=arr[0][i];
                    k++;
                }
                else
                {  
                     //checking if the common digit is unique or not
                    int flag=0;
                    for(int p=0; p<k; p++)
                    {
                        if(common[p]==arr[0][i])
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==0)
                    {
                        common[k]=arr[0][i];
                        k++;
                    }
                }
            }
        }
     }

     //print output
        printf("intersection of two sets is: ");
        for(int i=0; i<k; i++)
        {
            printf("%d ", common[i]);
        }    
}        
