#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    double Average1,Average2;

    scanf("%f %f %f %f",&a,&b,&c,&d);
    Average1 = ((a*2) + (b*3) + (c*4) + d)/10;
    printf("Media: %.1lf\n",Average1);

    if(Average1 >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(Average1 < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {

    {
        printf("Aluno em exame.\n");
    }
    scanf("%f",&e);

    printf("Nota do exame: %.1f\n",e);

    Average2 = (Average1 + e)/2;


    if (Average2 >= 5.0)
    {
        printf("Aluno aprovado.\n");
    }
    else

    {
        printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1lf\n",Average2);
    }



    return 0;

}
