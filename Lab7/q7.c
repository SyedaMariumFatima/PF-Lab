#include<stdio.h>
int main()
{
    //input text
    char text[20];
    printf("Enter a text: ");
    scanf("%s", text);

    //summation of digits
    int sum=0;
    for(int i=0; text[i]!='\0'; i++)
    {
        if((text[i]>'0') && (text[i]<'9'))
        {
            sum+=(text[i]-'0');
        }    
    }

    //printing result
     printf("Sum of digits in the text is: %d\n", sum);


}
