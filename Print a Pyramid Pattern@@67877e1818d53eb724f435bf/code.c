#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; n>i; i++){
        for(int j=0; j<n-i-1; j++){
            printf(" ");   
        }
        for(int k=0; k<n-i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}