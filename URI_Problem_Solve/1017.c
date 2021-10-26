#include <stdio.h>

int main()
{
    int  spent_time,average_speed;
    double spent_fuel;
    scanf("%d %d",&spent_time,&average_speed);

   spent_fuel = (spent_time * average_speed)/12.0;

    printf("%.3lf\n", spent_fuel);



    return 0;
}
