#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    int add;
    int substract;
    int multiply;
    int devide;
    if(c == "+"){
        add = a+b;
        printf("%d", add);
    }
    else if(c == "-"){
        substract = a-b;
        printf("%d", substract);
    }
    else if(c == "/"){
        devide = a/b;
        printf("%d", devide);
    }
    else if(c == "*"){
        multiply = a*b;
        printf("%d", multiply);
    }
    return 0;
}