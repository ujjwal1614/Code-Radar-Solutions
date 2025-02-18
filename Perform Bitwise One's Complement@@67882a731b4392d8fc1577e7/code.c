#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int not = a ~ b;
    printf("%d", not);
}