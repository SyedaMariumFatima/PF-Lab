#include<stdio.h>
int main()
{
    int arr[6];
    for(int i=0; i<6; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    int last=arr[5];
    for(int i=6; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=last;
    printf("Array after shifting:\n ");
    for(int i=0; i<6; i++)
    {
        printf("%d\n", arr[i]);
    }
}
