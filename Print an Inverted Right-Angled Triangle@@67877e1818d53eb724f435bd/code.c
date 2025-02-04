#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; a>i; i++){
        for(int j=a; j >i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}