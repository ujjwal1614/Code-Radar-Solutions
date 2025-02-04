#include <stdio.h>

int main() {
    int a, b;
    int add = a + b;
    scanf("%d %d", &a, &b);
    if(a != b){ 
        printf("%d", add);
    }
    else{
        printf("%d", a);
    }
    return 0;
}