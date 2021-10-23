#include <stdio.h>
int main()
{
    char JOAO[100];

    double fixed_salary,percentage_salary,TOTAL;

    scanf("%s %lf %lf",&JOAO,&fixed_salary,&percentage_salary);


    TOTAL = (fixed_salary) + (percentage_salary * 0.15);


    printf("TOTAL = R$ %.2lf\n",TOTAL);

    return 0;
}


