#include <stdio.h>

int main() {
    int a;
    int j;
    scanf("%d", &a);
    for(int i =0; a>i; i++){
        for(j=(a-i); j > i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}