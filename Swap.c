#include<stdio.h>
int main()
{
    int num1 = 5;
    int num2 = 10;

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Num1 = %d \n",num1);
    printf("Num2 = %d",num2);

    return 0;
}