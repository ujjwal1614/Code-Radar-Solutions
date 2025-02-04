#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    double average = (a + b + c)/3;
    printf("Average: %.2lf", average);
    
    return 0;
}