#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int k=0; k<n-i-1; k++){
            printf("#");
        }
        for(int j=1; j<=n; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}