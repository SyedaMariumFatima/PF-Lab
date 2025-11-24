#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    for (int i = 1, j = 1; i < n / 2; i += 2, j++)
    {
        temp = arr[i];
        arr[i] = arr[(n / 2) + j];
        arr[(n / 2) + j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}