#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    for(int i =0; i<n; i++){
        printf("2 x %d ", i+1);
        int m;
        m = 2*(i+1);
        printf("= %d", m);
    }
    return 0;
}