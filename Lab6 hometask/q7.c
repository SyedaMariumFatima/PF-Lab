#include<stdio.h>
int main()
{   
    int a=0, b=1;
    printf("%d ", a);
    for(int i=0; i<10; i++)
    {
        printf("%d ",b); 
        int c=a+b;
        a=b;
        b=c;
    }
}