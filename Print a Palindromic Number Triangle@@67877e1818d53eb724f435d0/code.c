#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<(n-i-1); j++){
            printf(" ");
        }
        for(int k =0; k<(2*i+1); k++){
            for(int m = 0; m<(n-i-1); m++){
                printf("%d", m+1);
            }
            // for(int l = (n-i); l<n; l--){
            //     printf("%d", l-1);
            // }
        }
        printf("\n");
    }
    return 0;
}