#include <stdio.h>

int main() {
    int a ,b ,c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        if(a > c){
            printf("%d", a);
        }
        else if(c > a){
            printf("%d", c);
        }
    }
    else if(b > a){
        if(b > c){
            printf("%d", b);
        }
        else if(c > b){
            printf("%d", c);
        }
    }
    else if(a == b && b == c){
        printf("%d", a);
    }
    else if(a == b){
        if(a < c){
            printf("%d", c);
        }
        else{
            printf("%d", a);
        }
    }
    return 0;
}