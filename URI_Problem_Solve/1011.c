#include <stdio.h>
int main()
{
    double radius,VOLUME;
    scanf("%lf",&radius);

    VOLUME = (4/3.0) * 3.14159 * radius * radius * radius;

    printf("VOLUME = %.3lf\n",VOLUME);

    return 0;

}
