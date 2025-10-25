#include<stdio.h>
int main()
{
   int stdmarks[5][3]= {
   {80, 75, 90},
   {60, 70, 65},
   {78, 82, 88},
   {92, 85, 89},
   {55, 60, 58}
   };

   //calculating total
   int total[5];
   for(int i=0; i<5; i++)
   {  int sum=0;
      for(int j=0; j<3; j++)
      {
         sum+=stdmarks[i][j];
      }
      
      total[i]=sum;
   }

   //calculating avg
   int avg[3];
   for(int i=0; i<3; i++)
   {
      int sum=0;
      for(int j=0; j<5; j++)
      {
         sum+=stdmarks[j][i];
      }
      avg[i]=sum/5;
   }

   //printing results
   printf("Total marks of students\n");
   for(int i=0; i<5; i++)
   {
      printf("\ttotal marks of student %d : %d\n", i+1, total[i]);
   }
   printf("\n");
   printf("Average marks of subjects\n");
   for(int i=0; i<3; i++)
   {
      printf("\taverage marks of subject %d : %d\n", i+1, avg[i]);
   }

}