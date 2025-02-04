#include <stdio.h>

int main() {
    int a, b;
    int add = a + b;
    scanf("%d %d", &a, &b);
    if(a > 0 && b > 0){ 
        printf("%d", add);
    }
    else{
        printf("%d", a);
    }
    return 0;
}