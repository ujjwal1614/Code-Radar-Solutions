#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if(num % 5 == 0){
        if(num % 11 == 0){
            printf("Divisible");
        }
        else{
            printf("Non Divisible");
        }
    }
    else(
        printf("Non Divisible");
    )
    return 0;
}