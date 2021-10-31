#include <stdio.h>

int main()
{
    int product_code,product_quantity;
    float total_price;
    scanf("%d %d",&product_code,&product_quantity);
    if(product_code == 1)
    {
        total_price = 4.00 * product_quantity;
    }
    else if(product_code == 2)
    {
        total_price = 4.50 * product_quantity;
    }
    else if(product_code == 3)
    {
        total_price = 5.00 * product_quantity;
    }
    else if(product_code == 4)
    {
        total_price = 2.00 * product_quantity;
    }
    else
    {
       total_price = 1.50 * product_quantity;
    }

    printf("Total: R$ %.2f\n",total_price);

    return 0;
}
