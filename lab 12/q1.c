#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the number of elements you want to store: ");
    int n;
    scanf("%d", &n);
    int *arr;
    arr = malloc(n * sizeof(int));
}