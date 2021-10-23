#include <stdio.h>
int main()
{
   int number,hour;
   float per_hour_rate,salary;
   scanf("%d %d %f",&number,&hour,&per_hour_rate);

   salary = hour * per_hour_rate;

   printf("NUMBER = %d\n",number);
   printf("SALARY = U$ %.2f\n",salary);

   return 0;

}
