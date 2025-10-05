//Write a program to input two numbers and display their sum, difference, product, and quotient
#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("\nQuotient: %.2f", quotient);
    } else {
        printf("\nDivision by zero is not allowed.");
    }

    printf("\nSum: %.2f", sum);
    printf("\nDifference: %.2f", difference);
    printf("\nProduct: %.2f", product);

    return 0;
}
