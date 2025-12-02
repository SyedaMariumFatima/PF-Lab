#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            arr[i] = 1;
        else
            arr[i] = 0;
    }
    int c1 = 0, c0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            c1++;
        else
            c0++;
    }
    for (int i = 0; i < c0; i++)
    {
        arr[i] = 0;
    }
    for (int i = c0; i < n; i++)
    {
        arr[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}