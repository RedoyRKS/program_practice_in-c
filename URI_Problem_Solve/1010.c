#include <stdio.h>
int main()
{
    int product_1_code,product_2_code,product_1_quantity,product_2_quantity;

    float product_1_per_piece,product_2_per_piece,total_price;
    scanf("%d %d %f",&product_1_code, &product_1_quantity, &product_1_per_piece);
    scanf("%d %d %f",&product_2_code, &product_2_quantity, &product_2_per_piece);

    total_price = (product_1_quantity * product_1_per_piece) + (product_2_quantity * product_2_per_piece);

    printf("VALOR A PAGAR: R$ %.2f\n",total_price);


    return 0;
}
