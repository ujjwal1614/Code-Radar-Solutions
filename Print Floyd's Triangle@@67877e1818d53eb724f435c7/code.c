#include <stdio.h>

int main() {
    int n;
    int num = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++){

        for(int j=n-i; j<=n; j++){
            printf("%d ", num);
            num += 1;
        }
        printf("\n");
    }
    return 0;
}