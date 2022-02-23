#include<stdio.h>
int main()
{
    /*
    //lowercase to uppercase letter
    char lower;
    printf("Enter the lower case letter : ");
    scanf("%c", &lower); //a=97
    printf("The upper case letter : %c", lower-32); //A=65
    */

   
    //upercase to lowercase letter.
    char upper;
    printf("Enter the upper case letter : ");
    scanf("%c", &upper); //A=65
    printf("The lower case letter : %c", upper+32); //a=65
    

    return 0;
}