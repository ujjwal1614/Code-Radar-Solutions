#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int xor = a ^ b;
    printf("%d", xor);
}