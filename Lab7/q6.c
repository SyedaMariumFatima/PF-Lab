#include<stdio.h>

int main()
{
    //storing data
    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    //summation
    int sum=0;
    for(int i=0; i<10; i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }

    //printing result
    printf("total profit is: %d\n", sum);
}
