#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i =0; i<a; a--){
        for(int j=i+1; j==0; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}