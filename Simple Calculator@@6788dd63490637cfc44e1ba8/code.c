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
    else if(c == '-'){
        result = a-b;
        printf("%d\n", result);
    }
    else if(c == '*'){
        result = a*b;
        printf("%d\n", result);
    }
    else if(c == '/'){
        if(b != 0){
            devide = float(a/b);
            printf("%d\n", devide);
        }
        else{
            printf("error");
        }
    }
    return 0;
}