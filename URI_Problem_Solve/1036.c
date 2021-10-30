#include <stdio.h>

int main()
{
    float A,B,C,X,Y,Z;
    scanf("%f %f %f",&A,&B,&C);
    X = (B*B)-(4*A*C);
    if(X<0)
    {
        printf("Impossivel calcular\n");
    }
    else if(A == 0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        Y = (-B + sqrt(X)) / (A+A);
        Z = (-B - sqrt(X)) / (A+A);
        printf("R1 = %.5f\n",Y);
        printf("R2 = %.5f\n",Z);
    }

    return 0;

}
