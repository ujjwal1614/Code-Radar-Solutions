#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    if(n>0){
    for(int i =0; i<n ; i++){
        printf("%d", n);
        printf(" x %d", i+1);
        m = n*(i+1);
        printf(" = %d\n", m);
    }}
    else{
    for(int i =0; i>n ; i--){
        printf("%d", n);
        printf("x %d", i+1);
        m = n*(i+1);
        printf(" = %d\n", m);
    }}
    return 0;
}