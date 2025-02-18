#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int rs = a >> b;
    printf("%d", rs);
}