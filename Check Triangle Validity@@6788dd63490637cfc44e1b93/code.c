#include <stdio.h>

int main() {
    int a ,b ,c;
    scanf("%d %d %d", &a &b &c);
    int add;
    add = (a*a) + (b*b); 
    int third;
    third = (c*c);
    if(add == third){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}