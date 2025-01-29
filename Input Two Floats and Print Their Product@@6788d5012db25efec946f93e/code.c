#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    int product;
    product = (int)a * (int)b;
    printf("Product: %d", product);

    return 0;
}