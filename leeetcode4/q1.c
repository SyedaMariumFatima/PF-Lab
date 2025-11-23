#include <stdio.h>

int climbstairs(int n)
{
    if (n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return climbstairs(n - 1) + climbstairs(n - 2);
}
int main()
{
    int n;
    scanf(" %d", &n);
    printf("%d", climbstairs(n));
    return 0;
}