#include <stdio.h>

int main()

{
    char gen;
    double quantity, price, amount, discount;

    printf("----Enter your gender--(m/f)----:");
    scanf("%c", &gen);

    if (gen == 'm' || gen == 'M')
    {
        printf("Male\n");
    }
    else if (gen == 'f' || gen == 'F')
    {
        printf("Female\n");
    }
    else
    {
        printf("Invalid Choice");
    }

    printf("\nEnter price:");
    scanf("%lf", &price);

    amount = price;

    if (gen == 'f')

    {

        discount = amount * 0.10;
    }

    else if (gen == 'm')
    {
        discount = amount * 0.05;
    }
    else
    {
        discount = 0;
    }
    amount = amount - discount;

    printf("%lf", amount);

    return 0;
}
