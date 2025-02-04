#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
     int add = a + b;
    if(a != b){ 
        printf("%d", add);
    }
    else{
        printf("%d", a);
    }
    return 0;
}