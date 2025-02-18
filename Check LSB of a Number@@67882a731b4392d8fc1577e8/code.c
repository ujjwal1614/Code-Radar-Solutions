#include <stdio.h>
int main(){
    int a;
    scanf("%d %d", &a, &b);
    int lsb = a & 1;
    printf("%d", lsb);
}