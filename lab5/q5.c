#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num % 2 == 0) && (num % 3 == 0)) {
        printf("%d is divisible by both 2 and 3.\n", num);
    } else {
        printf("%d is NOT divisible by both 2 and 3.\n", num);
    }

    return 0;
}
