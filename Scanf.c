#include<stdio.h>
int main()
{
    int numA;
    float numB;
    char chC;
    printf("Enter an integer, float and charecter : ");
    scanf("%d %f %c",&numA,&numB,&chC);
    printf("The Number : %d %.2f %c \n",numA,numB,chC);

    return 0;
}