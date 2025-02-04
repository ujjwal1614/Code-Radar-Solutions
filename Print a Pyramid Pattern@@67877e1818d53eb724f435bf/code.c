#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; n>i; i++){
        for(int j = i+1; j>0; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}