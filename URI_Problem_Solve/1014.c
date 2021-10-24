#include <stdio.h>
int main()
{
    int X;
    float Y;
    double total_fuel;
    scanf("%d %f",&X,&Y);

    total_fuel = X/Y;

    printf("%.3lf km/l\n",total_fuel);

    return 0;

}
