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
        printf("Enter elements of set %d: ", i+1);
        for(int j=0; j<n; j++)
        {
            printf("Enter element %d: ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    //add 2d array to union array
    int m=2*n;
    int uni[m];
    int k=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<n; j++)
        {
            uni[k]= arr[i][j];
            k++;
        }
    }

    //sort union array
    int swap;
    for(int i=0; i<m; i++)
    {
        //bubble sort
        for(int j=0; j<m-1; j++)
        {
            if(uni[j]>uni[j+1])
            {
                swap=uni[j];
                uni[j]=uni[j+1];
                uni[j+1]=swap;
            }
        }
    }

    //remove repeated digits
    for(int i=0; i<m; i++)
    {
        if(uni[i]==uni[i+1])
        {
            for(int j=i+1; j<m; j++)
            {
                uni[j]=uni[j+1];
            }
            m--;
        }
    }

    //print output
    printf("union :");
    for(int i=0; i<m; i++)
    {
        printf("%d ", uni[i]);
       
    }

    return 0;
}    