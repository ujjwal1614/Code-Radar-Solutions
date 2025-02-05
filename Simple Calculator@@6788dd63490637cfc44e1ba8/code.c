#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    int result;
    float devide;
    if(c == '+'){
        result = a+b;
        printf("%d\n", result);
    }
    return 0;
}