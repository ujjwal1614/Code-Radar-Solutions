#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            // for(int k=1; k<=2; k++){
            //     printf("%d", k);
            // }
            printf("*")
        }
        printf("\n");
    }
    return 0;
}