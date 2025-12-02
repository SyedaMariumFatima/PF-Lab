#include <stdio.h>

int main()
{

    int numsSize;
    printf("Enter the size of the array: ");
    scanf("%d", &numsSize);
    int nums[numsSize];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numsSize; i++)
    {
        scanf("%d", &nums[i]);
    }

    int insertPos = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[insertPos++] = nums[i];
        }
    }

    while (insertPos < numsSize)
    {
        nums[insertPos++] = 0;
    }

    for (int i = 0; i < numsSize; i++)
    {
        printf("%d", nums[i]);
    }

    return 0;
}