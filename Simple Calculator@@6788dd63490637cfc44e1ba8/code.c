#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if(c == "+"){
        int add = a+b;
        printf("%d", add);
    }
    else if(c == "-"){
        int substract = a-b;
        printf("%d", substract);
    }
    else if(c == "/"){
        int devide = a/b;
        printf("%d", devide);
    }
    else if(c == "*"){
        int multiply = a*b;
        printf("%d", multiply);
    }
    return 0;
}