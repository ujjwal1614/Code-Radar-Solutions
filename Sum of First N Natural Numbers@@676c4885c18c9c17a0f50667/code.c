#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + (i+1);
    }
    printf("%d", sum);
    return 0;
}