#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<(n-i-1); j++){
            printf("*");
        }
    }
    return 0;
}