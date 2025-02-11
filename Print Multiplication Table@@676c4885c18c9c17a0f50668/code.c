#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    if(n>0){
    for(int i =0; i<n ; i++){
        printf("2 x %d", i+1);
        m = n*(i+1);
        printf(" = %d", m);
    }}
    else{
    for(int i =0; i>n ; i--){
        printf("2 x %d", i+1);
        m = n*(i+1);
        printf(" = %d", m);
    }}
    return 0;
}