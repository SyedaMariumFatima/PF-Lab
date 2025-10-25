#include<stdio.h>
int main()
{
    int temp[7][3];
    for(int i=0; i<7; i++)
    {
        printf("enter temperatures for day %d", i+1);
        
        for(int j=0;j<3;j++)
        {   
            char time[10];
            switch(j)
            {
                case 0:
                time[10]="Morning";
                break;

                case 1:
                time[10]="afternoon";
                break;

                case 2:
                time[10]="Night";
                break;
            }
            
            //input temp
            printf("\tEnter %s temperature", time);
            scanf("%d",temp[i][j]);
        }
        
    }

//printing the table
    printf("\tMorning\t\tAfternoon\tNight\t\tAverage\n");
    for(int i=0; i<7; i++)
    {
        printf("Day %d\t", i+1);
        int sum=0;
        for(int j=0;j<3;j++)
        {   
            printf("%dC\t\t", temp[i][j]);
            sum+=temp[i][j];
        }
        int avg=sum/3;
        printf("%dC\n", avg);
    }
}