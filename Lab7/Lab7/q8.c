#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0; i<10; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<10; i++)
    {
        if(arr[i+1]<arr[i])
        {
            printf("Array is not sorted in ascending order.\n");
            return 0;
        }
    }
    printf("Array is sorted in ascending order.\n");
    return 0;
}