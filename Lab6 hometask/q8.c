#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int c=num, rem, rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(c==rev)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
}