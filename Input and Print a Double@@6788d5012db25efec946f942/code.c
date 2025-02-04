#include <stdio.h>

int main() {
    float num;
    scanf("%f", &num);
    if(num == 12345.6789){
        printf("You entered: 12345.6787");
    }
    printf("You entered: %.4f", num);
    return 0;
}