#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    if(n>0){
    for(int i =1; i<11 ; i++){
        printf("%d", n);
        printf(" x %d", i);
        m = n*(i);
        printf(" = %d\n", m);
    }}
    else{
    for(int i =1; i<11 ; i++){
        printf("%d", n);
        printf(" x %d", i);
        m = n*(i);
        printf(" = %d\n", m);
    }}
    return 0;
}