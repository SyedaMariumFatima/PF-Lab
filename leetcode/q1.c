#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        ans[i] = 0;
        for (int j = 0; j <= i; j++)
        {
            ans[i] += arr[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }
}