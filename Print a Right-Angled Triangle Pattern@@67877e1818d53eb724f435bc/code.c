#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; a>i; a--){
        for(int j=a; j > i+1; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}