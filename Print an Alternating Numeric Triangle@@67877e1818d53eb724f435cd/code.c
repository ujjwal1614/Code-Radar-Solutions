#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=n-i; j<=n; j++){
            printf("1");
        }
        printf("\n");
    }
    return 0;
}