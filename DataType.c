#include<stdio.h>
int main()
{
    int num1=10,num2=20;
    float num3=2.5;
    double num4=5.7646584567;
    char ch ='a';
    printf("The Number are = %d and %d \n", num1,num2);
    printf("The floating number is = %.1f \n", num3);
    printf("The double number is = %lf \n", num4);
    printf("The charecter number is = %c \n", ch);



    //write a program that take an integer number and print that number.
    int num;
    printf("Please enter an integer : ");
    scanf("%d",&num);
    printf("You have pressed : %d \n",num);

    
    return 0;
}