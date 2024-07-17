#include <stdio.h>

int main() {
    float num1, num2, product;

    printf("Enter Two numbers: ");
    scanf("%f %f", &num1, &num2);
    product = num1 * num2;
    printf("The product = %f\n", product);

    return 0;
}