#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<(n-i-1); j++){
            printf(" ");
        }
        for(int k =0; k<(2*i+1); k++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            printf(" ");
        }
        for(int k = n; k>=(2*i+1); k--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}