#include <stdio.h>

int main()
{
    float a,b,c,X,Y;
    scanf("%f %f %f",&a,&b,&c);
    X = (a+b+c);
    Y = ((a+b)*c)/2.0;

    if(a+b > c && b+c > a && a+c > b)
    {
        printf("Perimetro = %.1f\n",X);
    }
    else
    {
        printf("Area = %.1f\n",Y);
    }

    return 0;
}
