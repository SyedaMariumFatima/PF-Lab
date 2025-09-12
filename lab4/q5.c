#include <stdio.h> 
int main()
{
    int num1, num2;
    printf("enter first number:");
    scanf("%i", &num1);
    printf("enter second number:");
    scanf("%i", &num2);
    printf("enter operation(+,-,*,/):");
    char op;
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("answer: %i", num1 + num2);
        break;
    case '-':
        printf("answer: %i", num1 - num2);
        break;
    case '*':
        printf("answer: %i", num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("answer: %f", (float)num1 / num2);
        }
        else
        {
            printf("Error: Division by zero");
        }
        break;
    default:
        printf("Invalid operation. enter(+,-,*,/)");
        break;
    }
}