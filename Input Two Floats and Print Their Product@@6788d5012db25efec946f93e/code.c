#include <stdio.h>

int main() {
    float num1, num2, product;

    // Input two space-separated floating-point numbers
    scanf("%f %f", &num1, &num2);

    // Calculate their product
    product = num1 * num2;

    // Print the product
    printf("Product: %.2f\n", product);

    return 0;
}
