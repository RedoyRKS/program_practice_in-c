#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;

    printf("Size of int %d bytes.\n",sizeof(i));
    printf("Size of float %d bytes.\n",sizeof(f));
    printf("Size of double %d bytes.\n",sizeof(d));
    printf("Size of char %d bytes.",sizeof(c));

    return 0;
}