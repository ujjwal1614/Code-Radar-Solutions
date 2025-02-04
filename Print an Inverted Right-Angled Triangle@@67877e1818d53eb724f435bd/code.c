#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; a>i; a--){
        for(int j=(a-i); j > i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}